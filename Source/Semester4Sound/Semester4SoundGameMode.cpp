// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Semester4SoundGameMode.h"
#include "Semester4SoundPawn.h"

ASemester4SoundGameMode::ASemester4SoundGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = ASemester4SoundPawn::StaticClass();
}
