// Fill out your copyright notice in the Description page of Project Settings.

#include "C_BaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "../Public/C_BaseCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "A_BaseWeapon.h"
#include "Shooter_OW_Style.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AC_BaseCharacter::AC_BaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);
	
	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;

	GetCapsuleComponent()->SetCollisionResponseToChannel(COLLISION_WEAPON, ECR_Ignore);
	
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp);

	WeaponAttachSocketName = "WeaponSocket";

	ZoomedFOV = 65.0f;
	ZoomInterpSpeed = 20;
}

// Called when the game starts or when spawned
void AC_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();	

	DefaultFOV = CameraComp->FieldOfView;

	FActorSpawnParameters SpawnParams; 
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	CurrentWeapon = GetWorld()->SpawnActor<AA_BaseWeapon>(StarterWeapon, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);

	if (CurrentWeapon)
	{
		CurrentWeapon->SetOwner(this);
		CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponAttachSocketName);
	}
}

void AC_BaseCharacter::MoveForward(float Speed)
{
	AddMovementInput(GetActorForwardVector() * Speed);
}

void AC_BaseCharacter::MoveRight(float Speed)
{
	AddMovementInput(GetActorRightVector() * Speed);
}

void AC_BaseCharacter::BeginCrouch()
{
	Crouch();
}

void AC_BaseCharacter::EndCrouch()
{
	UnCrouch();
}

void AC_BaseCharacter::JumpFunction()
{
	Jump();
	jumping = true;
}

void AC_BaseCharacter::EndJump()
{
	StopJumping();
}

void AC_BaseCharacter::BeginZoom()
{
	bWantsToZoom = true;
}

void AC_BaseCharacter::EndZoom()
{
	bWantsToZoom = false;
}

void AC_BaseCharacter::Fire()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->StartFire();
	}
}

void AC_BaseCharacter::StopFire()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->EndFire();
	}
}

// Called every frame
void AC_BaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float TargetFov = bWantsToZoom ? ZoomedFOV : DefaultFOV;

	float NewFov = FMath::FInterpTo(CameraComp->FieldOfView, TargetFov, DeltaTime, ZoomInterpSpeed);

	CameraComp->SetFieldOfView(NewFov);

}

// Called to bind functionality to input
void AC_BaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//MOVEMENT
		
	PlayerInputComponent->BindAxis("MoveForward", this, &AC_BaseCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AC_BaseCharacter::MoveRight);

	// MOUSE/CAMERA

	PlayerInputComponent->BindAxis("LookUp", this, &AC_BaseCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &AC_BaseCharacter::AddControllerYawInput);
	
	//CROUCH

	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AC_BaseCharacter::BeginCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AC_BaseCharacter::EndCrouch);

	//JUMP

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AC_BaseCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AC_BaseCharacter::EndJump);

	//Zoom

	PlayerInputComponent->BindAction("Zoom",IE_Pressed, this, &AC_BaseCharacter::BeginZoom);
	PlayerInputComponent->BindAction("Zoom", IE_Released, this, &AC_BaseCharacter::EndZoom);

	//Shoot

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AC_BaseCharacter::Fire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &AC_BaseCharacter::StopFire);


}

FVector AC_BaseCharacter::GetPawnViewLocation() const
{
	if(CameraComp)
	{
		return CameraComp->GetComponentLocation();
	}

	return Super::GetPawnViewLocation();
}

