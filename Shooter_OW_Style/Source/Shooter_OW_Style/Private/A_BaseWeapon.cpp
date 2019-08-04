// Fill out your copyright notice in the Description page of Project Settings.

#include "A_BaseWeapon.h"
#include "DrawDebugHelpers.h"
#include "../Public/A_BaseWeapon.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Shooter_OW_Style.h"
#include "TimerManager.h"
#include "Math/UnrealMathUtility.h"
#include "Net/UnrealNetwork.h"
#include "Sound/SoundCue.h"

int32 DebugWeaponDrawing = 0;
FAutoConsoleVariableRef CVARDDebugWeaponDrawing(TEXT("COOP.DebugWeapons"), DebugWeaponDrawing, TEXT("Draw Debug Lines for Weapons"), ECVF_Cheat);

// Sets default values
AA_BaseWeapon::AA_BaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	RootComponent = SM_Weapon;

	MuzzleSocketName = "MuzzleSocket";
	TracerTargetName = "Target";

	baseDamage = 20.0f;

	RateOfFire = 600;

	SetReplicates(true);

	NetUpdateFrequency = 66.0f;
	MinNetUpdateFrequency = 33.0f;
}

// Called when the game starts or when spawned
void AA_BaseWeapon::BeginPlay()
{
	Super::BeginPlay();

	TimeBetweenShots = 60 / RateOfFire;
}

void AA_BaseWeapon::ShootFire()
{
	AActor* MyPlayer = GetOwner();
	

	if (Role != ROLE_Authority)
	{
		ServerShootFire();
	}

	//Same as if is valid
	if (MyPlayer)
	{
		FVector EyeLocation;
		FRotator EyeRotation;
		MyPlayer->GetActorEyesViewPoint(EyeLocation, EyeRotation);

		FVector ShotDirection = EyeRotation.Vector();

		FVector TraceEnd = EyeLocation + (EyeRotation.Vector() * 10000);

		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(MyPlayer);
		QueryParams.AddIgnoredActor(this);
		QueryParams.bTraceComplex = true;
		QueryParams.bReturnPhysicalMaterial = true;


		FVector TracerEndPoint = TraceEnd;

		EPhysicalSurface SurfaceType = SurfaceType_Default;

		FHitResult Hit;
		
		//IF WE HIT SOMETHING
		if (GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, TraceEnd, COLLISION_WEAPON, QueryParams))
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), RifleShotSound, GetActorLocation());
			//DO DAMAGE
			AActor* HitActor = Hit.GetActor();

			SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());

			float ActualDamage = baseDamage;

			if (SurfaceType == SURFACE_FLESHVULNERABLE)
			{
				ActualDamage *= 4.0f;
			}

			UGameplayStatics::ApplyPointDamage(HitActor, ActualDamage, ShotDirection, Hit, MyPlayer->GetInstigatorController(), this, DamageType);

			PlayImpactEffects(SurfaceType, Hit.ImpactPoint);
		
			TracerEndPoint = Hit.ImpactPoint;

			HitScanTrace.SurfaceType = SurfaceType;
		}

		if (DebugWeaponDrawing > 0)
		{
			DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::Red, false, 1.0f, 0, 1.0f);
		}
		
		PlayFireEffects(TracerEndPoint);

		if (Role == ROLE_Authority)
		{
			HitScanTrace.TraceTo = TracerEndPoint;
			HitScanTrace.SurfaceType = SurfaceType;
		}

		LastFireTime = GetWorld()->TimeSeconds;
		
	}
	
}

void AA_BaseWeapon::ServerShootFire_Implementation()
{
	ShootFire();
}

bool AA_BaseWeapon::ServerShootFire_Validate()
{
	return true;
}

void AA_BaseWeapon::PlayFireEffects(FVector TraceEnd)
{
	//IF Particle System no es null - Se hace para que no crashee
	if (PS_Muzzle)
	{
		UGameplayStatics::SpawnEmitterAttached(PS_Muzzle, SM_Weapon, MuzzleSocketName);
	}
	FVector MuzzleLocation = SM_Weapon->GetSocketLocation(MuzzleSocketName);

	//IF Particle System no es null - Se hace para que no crashee
	if (PS_TracerEffect)
	{
		UParticleSystemComponent* TracerComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), PS_TracerEffect, MuzzleLocation);
		if (TracerComp)
		{
			TracerComp->SetVectorParameter(TracerTargetName, TraceEnd);
		}

	}

	APawn* MyOwner = Cast<APawn>(GetOwner());
	if (MyOwner)
	{
		APlayerController* PC = Cast <APlayerController>(MyOwner->GetController());
		if (PC)
		{
			PC->ClientPlayCameraShake(FireCameraShake);
		}
	}
}

void AA_BaseWeapon::PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint)
{
	UParticleSystem* SelectedEffect = nullptr;
	switch (SurfaceType)
	{
	case SURFACE_FLESHDEFAULT:
	case SURFACE_FLESHVULNERABLE:
		SelectedEffect = PS_ImpactActor;
		break;

	default:
		SelectedEffect = PS_DefaultActor;
		break;

	}

	if (SelectedEffect)
	{
		FVector MuzzleLocation = SM_Weapon->GetSocketLocation(MuzzleSocketName);
		FVector ShotDirection = ImpactPoint - MuzzleLocation;

		ShotDirection.Normalize();
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SelectedEffect, ImpactPoint, ShotDirection.Rotation());
	}

}

void AA_BaseWeapon::OnRep_HitScanTrace()
{
	//PLAY COSMETIC FX 
	PlayFireEffects(HitScanTrace.TraceTo);

	PlayImpactEffects(HitScanTrace.SurfaceType, HitScanTrace.TraceTo);
}

// Called every frame
void AA_BaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AA_BaseWeapon::StartFire()
{
	float firstDelay = FMath::Max(LastFireTime + TimeBetweenShots - GetWorld()->TimeSeconds,0.0f);

	GetWorldTimerManager().SetTimer(TimeHandler_TimeBetweenShots, this, &AA_BaseWeapon::ShootFire, TimeBetweenShots, true, firstDelay);
}

void AA_BaseWeapon::EndFire()
{
	GetWorldTimerManager().ClearTimer(TimeHandler_TimeBetweenShots);
}

void AA_BaseWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(AA_BaseWeapon, HitScanTrace, COND_SkipOwner); //COND_SkipOwner replicates everyone less their owner
}

