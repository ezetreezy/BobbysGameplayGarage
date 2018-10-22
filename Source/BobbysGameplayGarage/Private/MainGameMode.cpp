// Fill out your copyright notice in the Description page of Project Settings.

#include "MainGameMode.h"
#include "UObject/ConstructorHelpers.h"



AMainGameMode::AMainGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/BP_MainCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
}