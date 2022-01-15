// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "QuickStart/MyActor.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class QUICKSTART_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:		
	virtual void SetupInputComponent() override;

private:
	void LogDebug();
};
