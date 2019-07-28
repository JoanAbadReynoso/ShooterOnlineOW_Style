// Fill out your copyright notice in the Description page of Project Settings.

#include "C_BaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "../Public/C_BaseCharacter.h"
#include "GameFramework/PawnMovementComponent.h"

// Sets default values
AC_BaseCharacter::AC_BaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);
	
	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;
	
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp);
}

// Called when the game starts or when spawned
void AC_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();	
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

// Called every frame
void AC_BaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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

}

FVector AC_BaseCharacter::GetPawnViewLocation() const
{
	if(CameraComp)
	{
		return CameraComp->GetComponentLocation();
	}

	return Super::GetPawnViewLocation();
}

