// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject3GameMode.h"
#include "MyProject3Pawn.h"

AMyProject3GameMode::AMyProject3GameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AMyProject3Pawn::StaticClass();
}
