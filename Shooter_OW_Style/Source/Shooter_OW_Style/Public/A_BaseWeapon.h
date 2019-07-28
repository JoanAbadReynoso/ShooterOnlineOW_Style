// Fill out your copyright notice in the Description page of Project Settings.

#pragma once



#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "A_BaseWeapon.generated.h"


class USkeletalMeshComponent;

UCLASS()
class SHOOTER_OW_STYLE_API AA_BaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AA_BaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* SM_Weapon;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void ShootFire();



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
