#include "MyPlayerController.h"
#include "EngineUtils.h"

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction("Debug", EInputEvent::IE_Pressed, this, &AMyPlayerController::LogDebug);
}

void AMyPlayerController::LogDebug()
{
	for (TActorIterator<AMyActor> It(GetWorld()); It; ++It)
	{
		(*It)->LogMyActor();
	} 
}
