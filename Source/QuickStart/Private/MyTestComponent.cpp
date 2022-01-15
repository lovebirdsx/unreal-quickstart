#include "MyTestComponent.h"

UMyTestComponent::UMyTestComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UMyTestComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UMyTestComponent::TickComponent(const float DeltaTime, const ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UMyTestComponent::LogInfo() const
{
	UE_LOG(LogTemp, Display, TEXT("A(%d) + B(%d) = %d"), A, B, A+B);
}
