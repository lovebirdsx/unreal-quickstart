#include "MyActor.h"

#include "MyTestComponent.h"
#include "ToolBuilderUtil.h"

AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = true;
	CalculateProperties();	
}

void AMyActor::LogMyActor()
{
	UE_LOG(LogTemp, Warning, TEXT("TotalDamage = %f DamageTimeInSeconds = %f DamagePerSecond = %f"), TotalDamage, DamageTimeInSeconds, DamagePerSecond);
}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();
}

void AMyActor::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	CalculateProperties();
	Super::PostEditChangeProperty(PropertyChangedEvent);
	UE_LOG(LogTemp, Warning, TEXT("AMyActor::PostEditChangeProperty DamagePerSecond = (%f/%f)%f"), TotalDamage, DamageTimeInSeconds, DamagePerSecond);
	EventForTest();
	RunEventForTestByCpp();
}

void AMyActor::CalculateProperties()
{
	DamagePerSecond = TotalDamage / DamageTimeInSeconds;
}

void AMyActor::PostLoad() 
{
	CalculateProperties();
	Super::PostLoad();

	UE_LOG(LogTemp, Warning, TEXT("AMyActor::PostLoad DamagePerSecond = (%f/%f)%f"), TotalDamage, DamageTimeInSeconds, DamagePerSecond)
}

void AMyActor::RunEventForTestByCpp() const
{
	UE_LOG(LogTemp, Warning, TEXT("====================================="));
	UE_LOG(LogTemp, Warning, TEXT("Event For Test"));
	UMyTestComponent *TestComponent = FindComponentByClass<UMyTestComponent>();
	if (TestComponent != nullptr)
	{
		TestComponent->LogInfo();
	}
	UE_LOG(LogTemp, Warning, TEXT("====================================="));
}
