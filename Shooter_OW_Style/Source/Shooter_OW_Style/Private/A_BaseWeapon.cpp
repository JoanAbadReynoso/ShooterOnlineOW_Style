// Fill out your copyright notice in the Description page of Project Settings.

#include "A_BaseWeapon.h"
#include "DrawDebugHelpers.h"
#include "../Public/A_BaseWeapon.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
// Sets default values
AA_BaseWeapon::AA_BaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	RootComponent = SM_Weapon;

	MuzzleSocketName = "MuzzleSocket";
	TracerTargetName = "Target";
}

// Called when the game starts or when spawned
void AA_BaseWeapon::BeginPlay()
{
	Super::BeginPlay();
}

void AA_BaseWeapon::ShootFire()
{
	AActor* MyPlayer = GetOwner();
	
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


		FVector TracerEndPoint = TraceEnd;

		FHitResult Hit;
		
		//IF WE HIT SOMETHING
		if (GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, TraceEnd, ECC_Visibility, QueryParams))
		{
			//DO DAMAGE
			AActor* HitActor = Hit.GetActor();

			UGameplayStatics::ApplyPointDamage(HitActor,20.0f,ShotDirection, Hit, MyPlayer->GetInstigatorController(),this, DamageType);

			if (PS_ImpactActor)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), PS_ImpactActor, Hit.ImpactPoint, Hit.ImpactNormal.Rotation());
			}

			TracerEndPoint = Hit.ImpactPoint;
		}

		//DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::Red, false, 1.0f, 0, 1.0f);

		//IF Particle System no es null - Se hace para que no crashee
		if(PS_Muzzle)
		{
			UGameplayStatics::SpawnEmitterAttached(PS_Muzzle,SM_Weapon, MuzzleSocketName);
		}
		FVector MuzzleLocation = SM_Weapon->GetSocketLocation(MuzzleSocketName);

		//IF Particle System no es null - Se hace para que no crashee
		if (PS_TracerEffect)
		{
			UParticleSystemComponent* TracerComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), PS_TracerEffect, MuzzleLocation);
			if (TracerComp)
			{
				TracerComp->SetVectorParameter(TracerTargetName, TracerEndPoint);
			}

		}
	}
	
}

// Called every frame
void AA_BaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

