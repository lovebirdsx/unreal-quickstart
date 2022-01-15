#include "../../Public/FooObject.h"
#include "CoreTypes.h"
#include "Containers/UnrealString.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFooObjectTest, "QuickStart.Test.FooObject", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)

bool FFooObjectTest::RunTest(const FString& Parameters)
{
    // Add
    TestEqual(TEXT("Add"), UFooObject::Add(5, 5), 10);
    TestEqual(TEXT("Add"), UFooObject::Add(5, 6), 11);

    // Sub
    TestEqual(TEXT("Sub"), UFooObject::Sub(5, 5), 0);

    return true;
}
