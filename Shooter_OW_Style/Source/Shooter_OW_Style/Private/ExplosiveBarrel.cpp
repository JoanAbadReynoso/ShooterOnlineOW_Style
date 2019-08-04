// Fill out your copyright notice in the Description page of Project Settings.

#include "ExplosiveBarrel.h"
#include "Engine/StaticMesh.h"
#include "HealthComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Materials/MaterialInterface.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "Sound/SoundCue.h"
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
	RadialForceComp->Radius = 650;
	RadialForceComp->bImpulseVelChange = true;
	RadialForceComp->bAutoActivate = false; // PREVENT COMPONENT FROM TICKING, AND ONLY USE FireImpulse() instead
	RadialForceComp->bIgnoreOwningActor = true;
	ExplosionImpulse = 400;
	
	SetReplicates(true);
	SetReplicateMovement(true);
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
		OnRep_Exploded();

		UGameplayStatics::PlaySoundAtLocation(GetWorld(), SC_Explossion, GetActorLocation());

		FVector BoostIntensity = FVector::UpVector * ExplosionImpulse;

		BarrelMesh->AddImpulse(BoostIntensity, NAME_None, true);

		UGameplayStatics::ApplyRadialDamage(GetWorld(), BaseDamage, GetActorLocation(), BaseDamage, DamageTypeSubClass, TArray<AActor*>(), this, (AController*)GetOwner(), true, ECC_PhysicsBody);
	}

}

void AExplosiveBarrel::OnRep_Exploded()
{


	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());
	
	BarrelMesh->SetMaterial(0, ExplodeMaterial);


}

void AExplosiveBarrel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{

	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AExplosiveBarrel, bExplode); // DE ESTA MANERA REPLICAMOS ESTA VARIABLE A TODOS LOS CLIENTES
}


