// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstPersonAdventureGameMode.h"
#include "FirstPersonAdventureCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstPersonAdventureGameMode::AFirstPersonAdventureGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
