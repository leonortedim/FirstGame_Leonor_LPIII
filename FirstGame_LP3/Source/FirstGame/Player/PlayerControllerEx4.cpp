// Fill out your copyright notice in the Description page of Project Settings.

#include "FirstGame/Player/PlayerControllerEx4.h"
#include "GameFramework/Character.h"
#include "GameFramework/Pawn.h"

void APlayerEx4Controller::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Bind axis input for movement and camera control
	InputComponent->BindAxis("Move_Forward", this, &APlayerEx4Controller::MoveForward);
	InputComponent->BindAxis("Move_Sides", this, &APlayerEx4Controller::MoveSides);
	InputComponent->BindAxis("TurnCamera", this, &APlayerEx4Controller::Turn);
	InputComponent->BindAxis("LookUp", this, &APlayerEx4Controller::LookUp);

	// Bind action input for jumping
	InputComponent->BindAction("Jump", IE_Pressed, this, &APlayerEx4Controller::Jump);
}

void APlayerEx4Controller::MoveForward(float Value)
{
	// Add movement input along the forward direction of the pawn
	if (APawn* MyPawn = GetPawn())
	{
		MyPawn->AddMovementInput(MyPawn->GetActorForwardVector(), Value);
	}
}

void APlayerEx4Controller::MoveSides(float Value)
{
	// Add movement input along the right direction of the pawn
	if (APawn* MyPawn = GetPawn())
	{
		MyPawn->AddMovementInput(MyPawn->GetActorRightVector(), Value);
	}
}

void APlayerEx4Controller::Turn(float Value)
{
	// Add rotation input for yaw (turning)
	AddYawInput(Value);
}

void APlayerEx4Controller::LookUp(float Value)
{
	// Add rotation input for pitch (looking up/down)
	AddPitchInput(Value);
}

void APlayerEx4Controller::Jump()
{
	// Trigger jump on the controlled character
	if (ACharacter* MyCharacter = Cast<ACharacter>(GetPawn()))
	{
		MyCharacter->Jump();
	}
}


