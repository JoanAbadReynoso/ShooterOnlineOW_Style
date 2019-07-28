// Fill out your copyright notice in the Description page of Project Settings.

#include "C_BaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AC_BaseCharacter::AC_BaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);
	
	
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

// Called every frame
void AC_BaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AC_BaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AC_BaseCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AC_BaseCharacter::MoveRight);


	PlayerInputComponent->BindAxis("LookUp", this, &AC_BaseCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &AC_BaseCharacter::AddControllerYawInput);

}

