// Copyright Epic Games, Inc. All Rights Reserved.

#include "EscapeGameMode.h"
#include "EscapeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEscapeGameMode::AEscapeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
