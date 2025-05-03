// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstGame/Player/NPC_AIController.h"
#include "NavigationSystem.h"
#include "GameFramework/Character.h"
#include "TimerManager.h"
#include "Navigation/PathFollowingComponent.h"

ANPC_AIController::ANPC_AIController()
{
	// Optional: Enable ticking if needed, not needed here
}

void ANPC_AIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (InPawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller possessed pawn: %s"), *InPawn->GetName());
		StartLocation = InPawn->GetActorLocation();
		MoveToRandomLocation();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AI Controller failed to possess pawn!"));
	}
}

void ANPC_AIController::MoveToRandomLocation()
{
	if (APawn* ControlledPawn = GetPawn())
	{
		UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
		if (NavSys)
		{
			FNavLocation RandomPoint;
			bool bFound = NavSys->GetRandomReachablePointInRadius(StartLocation, PatrolRadius, RandomPoint);
			if (bFound)
			{
				MoveToLocation(RandomPoint.Location);
			}
		}
	}
}

void ANPC_AIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);

	if (Result.IsSuccess())
	{
		// Add small delay before moving again to next random point
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, this, &ANPC_AIController::MoveToRandomLocation, 1.0f, false);
	}
}
