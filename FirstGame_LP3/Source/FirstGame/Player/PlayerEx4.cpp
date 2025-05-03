#include "FirstGame/Player/PlayerEx4.h"
#include "UseInterface.h"
#include "Camera/CameraComponent.h"

// Sets default values
APlayerEx4::APlayerEx4()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));
	Camera->SetupAttachment(RootComponent);
	Camera->bUsePawnControlRotation = true;

}

// Called when the game starts or when spawned
void APlayerEx4::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerEx4::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerEx4::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAction("OpenDoor", IE_Pressed, this, &APlayerEx4::UseDoor);
}


void APlayerEx4::UseDoor()
{
	if (OverlappingActor && OverlappingActor->GetClass()->ImplementsInterface(UUseInterface::StaticClass()))
	{
		IUseInterface::Execute_UseDoor(OverlappingActor);
	}
}

