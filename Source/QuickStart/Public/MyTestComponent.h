// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyTestComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class QUICKSTART_API UMyTestComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UMyTestComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActorComponent")
	int A;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActorComponent")
	int B;

	UFUNCTION(BlueprintCallable, Category = "MyActorComponent")
	void LogInfo() const;

protected:	
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;		
};
