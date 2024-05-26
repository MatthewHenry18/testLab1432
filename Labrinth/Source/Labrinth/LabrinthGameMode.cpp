// Copyright Epic Games, Inc. All Rights Reserved.

#include "LabrinthGameMode.h"
#include "LabrinthHUD.h"
#include "LabrinthCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALabrinthGameMode::ALabrinthGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALabrinthHUD::StaticClass();
}
