// Fill out your copyright notice in the Description page of Project Settings.

#include "Claymore.h"
#include "Engine/StaticMesh.h"
#include "Components/BoxComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AClaymore::AClaymore()
{
	ClaymoreMesh = CreateDefaultSubobject <UStaticMeshComponent>(TEXT("StaticMesh"));
	BoxComponent = CreateDefaultSubobject <UBoxComponent>(TEXT("BoxCollision"));
	RadialForceComp = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForceComponent"));

	BoxComponent->bHiddenInGame = false;

	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AClaymore::OnBoxBeginOverlap);
}

// Called when the game starts or when spawned
void AClaymore::BeginPlay()
{
	Super::BeginPlay();
	
}

void AClaymore::OnBoxBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());

	UGameplayStatics::ApplyRadialDamage(GetWorld(), 10, GetActorLocation(), BaseDamage, DamageTypeSubClass, TArray<AActor*>(), this, (AController*)GetOwner(), true, ECC_PhysicsBody);
}



