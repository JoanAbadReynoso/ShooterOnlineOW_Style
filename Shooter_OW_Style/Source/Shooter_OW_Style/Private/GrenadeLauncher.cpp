// Fill out your copyright notice in the Description page of Project Settings.

#include "GrenadeLauncher.h"

void AGrenadeLauncher::ShootFire()
{
	AActor* MyPlayer = GetOwner();

	//Same as if is valid
	if (MyPlayer && ProjectileClass)
	{
		FVector EyeLocation;
		FRotator EyeRotation;
		MyPlayer->GetActorEyesViewPoint(EyeLocation, EyeRotation);

		FVector MuzzleLocation = SM_Weapon->GetSocketLocation(MuzzleSocketName);

		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		GetWorld()->SpawnActor<AActor>(ProjectileClass, MuzzleLocation, EyeRotation, SpawnParams);
	}
}
