#include "../../FFoo.h"
#include "CoreTypes.h"
#include "Containers/UnrealString.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFooTest, "QuickStart.Test.Foo", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)

bool FFooTest::RunTest(const FString& Parameters)
{
    // Add
    TestEqual(TEXT("Add"), FFoo::Add(5, 5), 10);
    TestEqual(TEXT("Add"), FFoo::Add(5, 6), 11);
    UE_LOG(LogTemp, Display, TEXT("Add"));

    // Sub
    TestEqual(TEXT("Sub"), FFoo::Sub(5, 5), 0);
    UE_LOG(LogTemp, Display, TEXT("Sub"));

    // Add and Sub
    TestEqual(TEXT("Add and Sub"), FFoo::Add(FFoo::Sub(10, 5), FFoo::Add(1, 2)), 8);
    UE_LOG(LogTemp, Display, TEXT("Add and Sub"));

    return true;
}
