// Fill out your copyright notice in the Description page of Project Settings.

#include "A_BaseWeapon.h"
#include "DrawDebugHelpers.h"
#include "../Public/A_BaseWeapon.h"


// Sets default values
AA_BaseWeapon::AA_BaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	RootComponent = SM_Weapon;
}

// Called when the game starts or when spawned
void AA_BaseWeapon::BeginPlay()
{
	Super::BeginPlay();
}

void AA_BaseWeapon::ShootFire()
{
	AActor* MyPlayer = GetOwner();
	
	//LINETRACE BY CHANNEL 

	//Same as if is valid
	if (MyPlayer)
	{
		FVector EyeLocation;
		FRotator EyeRotation;
		MyPlayer->GetActorEyesViewPoint(EyeLocation, EyeRotation);

		FVector TraceEnd = EyeLocation + (EyeRotation.Vector() * 10000);

		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(MyPlayer);
		QueryParams.AddIgnoredActor(this);
		QueryParams.bTraceComplex = true;

		FHitResult Hit;
		
		//IF WE HIT SOMETHING
		if (GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, TraceEnd, ECC_Visibility, QueryParams))
		{
			//DO DAMAGE

		}

		DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::Red, false, 1.0f, 0, 1.0f);

	}
	
}

// Called every frame
void AA_BaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

