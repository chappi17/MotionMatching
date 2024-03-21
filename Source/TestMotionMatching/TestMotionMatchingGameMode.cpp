// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestMotionMatchingGameMode.h"
#include "TestMotionMatchingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestMotionMatchingGameMode::ATestMotionMatchingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
