
// Fill out your copyright notice in the Description page of Project Settings.

#include "TrackerBot.h"
#include "Components/StaticMeshComponent.h"
#include "Public/NavigationSystem.h"
#include "Public/NavigationPath.h"
#include "AI/NavigationSystemBase.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "HealthComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "C_BaseCharacter.h"
#include "Components/SphereComponent.h"
#include "Sound/SoundCue.h"

// Sets default values
ATrackerBot::ATrackerBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCanEverAffectNavigation(false);
	MeshComp->SetSimulatePhysics(true);
	RootComponent = MeshComp;

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthCompS"));
	HealthComponent->OnHealthChanged.AddDynamic(this, &ATrackerBot::HandleTakeDamage);

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetSphereRadius(200);
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereComp->SetupAttachment(RootComponent);

	bUseVelocityChange = true;

	SelfDamageInterval = 0.25;

	MovementForce = 1000;
	explosionDamage = 100;
	explosionRadius = 40;
	RequiredDistanceToTarget = 100;
}

// Called when the game starts or when spawned
void ATrackerBot::BeginPlay()
{
	Super::BeginPlay();

	if (Role == ROLE_Authority)
	{
		NextPathPoint = GetNextPatchPoint();
	}

}

FVector ATrackerBot::GetNextPatchPoint()
{
	ACharacter* PlayerPawn = UGameplayStatics::GetPlayerCharacter(this, 0);
	UNavigationPath* NavPath = UNavigationSystemV1::FindPathToActorSynchronously(this, GetActorLocation(), PlayerPawn);

	NavPath->PathPoints;

	if (NavPath->PathPoints.Num() > 1)
	{
		//Return the next path point
		return NavPath->PathPoints[1];
	}

	//Failed to find path

	return GetActorLocation();
}

void ATrackerBot::SelfDestruct()
{
	if (bExploded)
	{
		return;
	}

	bExploded = true;

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplossionEffect, GetActorLocation());
	UGameplayStatics::PlaySoundAtLocation(this, ExplodedSound, GetActorLocation());

	MeshComp->SetVisibility(false, true);
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	if(Role == ROLE_Authority)
	{
	TArray<AActor*> IgnoredActors;
	IgnoredActors.Add(this);
	UGameplayStatics::ApplyRadialDamage(this, explosionRadius,GetActorLocation(), explosionRadius, nullptr,IgnoredActors, this, GetInstigatorController(),true);
	DrawDebugSphere(GetWorld(), GetActorLocation(), explosionRadius, 12, FColor::Emerald, false, 2.0f, 0, 1.0f);

	SetLifeSpan(2.0f);
	
	}
}

void ATrackerBot::HandleTakeDamage(UHealthComponent * OwningHealthComponent, float Health, float HealthDelta, const UDamageType * DamageType, AController * InstigatedBy, AActor * DamageCauser)
{
	//Explode on hitpoints == 0;
	if (MatInst == nullptr)
	{
		MatInst = MeshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0, MeshComp->GetMaterial(0));
	}
	if(MatInst)
	{
		MatInst->SetScalarParameterValue("LastTimeDamageTaken", GetWorld()->TimeSeconds);
	}

	if (Health <= 0)
	{
		SelfDestruct();
	}
}

void ATrackerBot::DamageSelf()
{
	UGameplayStatics::ApplyDamage(this, 20, GetInstigatorController(), this, nullptr);
}

// Called every frame
void ATrackerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(Role == ROLE_Authority && !bExploded)
	{
		float DistanceToTarger = (GetActorLocation() - NextPathPoint).Size();

		if (DistanceToTarger <= RequiredDistanceToTarget)
		{
			NextPathPoint = GetNextPatchPoint();
		}
		else
		{
			FVector ForceDiraction = NextPathPoint - GetActorLocation();
			ForceDiraction.Normalize();

			ForceDiraction *= MovementForce;

			//Move to next target
			MeshComp->AddForce(ForceDiraction, NAME_None, bUseVelocityChange);
		}
	}
}

void ATrackerBot::NotifyActorBeginOverlap(AActor * OtherActor)
{
	AC_BaseCharacter* PlayerPawn = Cast<AC_BaseCharacter>(OtherActor);
	if (!bStartedSelfDestruction && !bExploded)
	{
		if (PlayerPawn)
		{
			//Start self destruction

			if(Role == ROLE_Authority)
			{
				GetWorldTimerManager().SetTimer(TimerHandle_SelfDamage, this, &ATrackerBot::DamageSelf, SelfDamageInterval, true, 0.0f);
			}
			bStartedSelfDestruction = true;

			UGameplayStatics::SpawnSoundAttached(SelfDestructSound, RootComponent);
		}
	}
}

