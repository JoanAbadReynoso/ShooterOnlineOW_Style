// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Claymore.generated.h"

class UStaticMeshComponent;
class UBoxComponent;
class UParticleSystem;
class URadialForceComponent;

UCLASS()
class SHOOTER_OW_STYLE_API AClaymore : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AClaymore();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool bExplode;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	float BaseDamage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* ClaymoreMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* BoxComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	URadialForceComponent* RadialForceComp;

	UPROPERTY(EditDefaultsOnly, Category = "FX")
	UParticleSystem* ExplosionEffect;

	UFUNCTION()
	void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	TSubclassOf<UDamageType> DamageTypeSubClass;

public:	
	
	
	
};
