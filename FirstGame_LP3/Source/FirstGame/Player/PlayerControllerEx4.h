#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerEx4.generated.h"

/**
 * Custom Player Controller for handling input and player movement
 */
UCLASS()
class FIRSTGAME_API APlayerEx4Controller : public APlayerController
{
	GENERATED_BODY()

protected:
	// Override SetupInputComponent to bind input actions
	virtual void SetupInputComponent() override;

private:
	// Functions to handle player movement and camera control
	void MoveForward(float Value);
	void MoveSides(float Value);
	void Turn(float Value);
	void LookUp(float Value);
	void Jump();
};

