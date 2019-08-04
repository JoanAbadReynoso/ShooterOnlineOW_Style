// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TrackerBot.generated.h"



class UStaticMeshComponent;
class UHealthComponent;
class USphereComponent;
class USoundCue;

UCLASS()
class SHOOTER_OW_STYLE_API ATrackerBot : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATrackerBot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	UStaticMeshComponent* MeshComp;

	FVector GetNextPatchPoint();

	FVector NextPathPoint;

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot Details")
	float MovementForce;

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot Details")
	float RequiredDistanceToTarget;

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot Details")
	bool bUseVelocityChange;

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot Details")
	float explosionRadius;

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot Details")
	float explosionDamage;

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot Details")
	float SelfDamageInterval;

	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	UHealthComponent* HealthComponent;

	UMaterialInstanceDynamic* MatInst;

	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	USphereComponent* SphereComp;

	void SelfDestruct();

	UPROPERTY(EditDefaultsOnly, Category = "FX")
	UParticleSystem* ExplossionEffect;

	UFUNCTION()
	void HandleTakeDamage(UHealthComponent* OwningHealthComponent, float Health, float HealthDelta, const UDamageType *DamageType, AController * InstigatedBy, AActor * DamageCauser);

	bool bExploded;

	bool bStartedSelfDestruction;

	FTimerHandle TimerHandle_SelfDamage;

	void DamageSelf();

	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
	USoundCue* SelfDestructSound;
	
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
	USoundCue* ExplodedSound;

	public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
