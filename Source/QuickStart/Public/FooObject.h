#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FooObject.generated.h"

UCLASS()
class QUICKSTART_API UFooObject : public UObject
{
	GENERATED_BODY()

public:
	static int Add(int A, int B);
	static int Sub(int A, int B);
};
