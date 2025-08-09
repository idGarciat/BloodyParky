// Copyright Epic Games, Inc. All Rights Reserved.

#include "BloodyParkyGameMode.h"
#include "BloodyParkyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABloodyParkyGameMode::ABloodyParkyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
