// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "A_BaseWeapon.h"
#include "GrenadeLauncher.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_OW_STYLE_API AGrenadeLauncher : public AA_BaseWeapon
{
	GENERATED_BODY()

	virtual void ShootFire() override;

	UPROPERTY(EditDefaultsOnly, Category = "ProjectileWeapon")
	TSubclassOf<AActor> ProjectileClass;
	
};
