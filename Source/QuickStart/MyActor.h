// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class QUICKSTART_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActor")
	float TotalDamage = 1000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActor")
	float DamageTimeInSeconds = 2.0f;

	UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = "MyActor")
	float DamagePerSecond;

	UFUNCTION(BlueprintCallable, Category = "Test")
	void LogMyActor();

	UFUNCTION(BlueprintImplementableEvent, Category = "Test")
	void EventForTest();

protected:	
	virtual void BeginPlay() override;
	virtual void PostLoad() override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void CalculateProperties();
	void RunEventForTestByCpp() const;	
};
