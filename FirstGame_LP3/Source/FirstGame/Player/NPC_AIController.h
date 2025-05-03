// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NPC_AIController.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTGAME_API ANPC_AIController : public AAIController
{
	GENERATED_BODY()

public:
	ANPC_AIController();

protected:
	// Called when controller possesses pawn
	virtual void OnPossess(APawn* InPawn) override;

	// Called when AI finishes moving to a location
	virtual void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

private:
	// Move to a random reachable location within PatrolRadius
	void MoveToRandomLocation();

private:
	// Location where pawn started, used as center point for patrolling
	FVector StartLocation;

	// Patrol radius in which to roam
	UPROPERTY(EditAnywhere, Category = "AI")
	float PatrolRadius = 1200.0f;
};