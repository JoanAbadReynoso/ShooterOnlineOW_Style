// Fill out your copyright notice in the Description page of Project Settings.

#include "ExplosiveBarrel.h"
#include "Engine/StaticMesh.h"
#include "HealthComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Materials/MaterialInterface.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AExplosiveBarrel::AExplosiveBarrel()
{
	HealthComp = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComp"));
	HealthComp->OnHealthChanged.AddDynamic(this, &AExplosiveBarrel::OnHealthChanged);

	BarrelMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Barrel"));
	BarrelMesh->SetCollisionObjectType(ECC_PhysicsBody);
	RootComponent = BarrelMesh;

	RadialForceComp = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForceComp"));
	RadialForceComp->SetupAttachment(BarrelMesh);
	RadialForceComp->Radius = 250;
	RadialForceComp->bImpulseVelChange = true;
	RadialForceComp->bAutoActivate = false; // PREVENT COMPONENT FROM TICKING, AND ONLY USE FireImpulse() instead
	RadialForceComp->bIgnoreOwningActor = true;

	

	ExplosionImpulse = 400;
	

}

// Called when the game starts or when spawned
void AExplosiveBarrel::BeginPlay()
{
	Super::BeginPlay();


	
}

void AExplosiveBarrel::OnHealthChanged(UHealthComponent * OwningHealthComponent, float Health, float HealthDelta, const UDamageType * DamageType, AController * InstigatedBy, AActor * DamageCauser)
{

	if (bExplode)
	{
		return;
	}

	if (Health <= 0.0f)
	{
		bExplode = true;

		FVector BoostIntensity = FVector::UpVector * ExplosionImpulse;
		
		BarrelMesh->AddImpulse(BoostIntensity, NAME_None, true);

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());

		BarrelMesh->SetMaterial(0,ExplodeMaterial);
		
		RadialForceComp->FireImpulse();

		UGameplayStatics::ApplyRadialDamage(GetWorld() , 10, GetActorLocation(), BaseDamage, DamageTypeSubClass, TArray<AActor*>(), this, (AController*)GetOwner(), true, ECC_PhysicsBody);


	}

}


