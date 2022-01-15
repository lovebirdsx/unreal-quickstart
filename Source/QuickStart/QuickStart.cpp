// Copyright Epic Games, Inc. All Rights Reserved.

#include "QuickStart.h"
#include "Modules/ModuleManager.h"

class FQuickStartImpl : public FDefaultGameModuleImpl {

    void ShutdownModule() override {
        /* Workaround for UE-25350 */
        FAutomationTestFramework::Get().UnregisterAutomationTest("FFooObjectTest");
        FAutomationTestFramework::Get().UnregisterAutomationTest("FFooTest");
    }
};

IMPLEMENT_PRIMARY_GAME_MODULE(FQuickStartImpl, QuickStart, "QuickStart" );
