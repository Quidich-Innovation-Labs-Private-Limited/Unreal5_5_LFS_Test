// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal5_5GitLfsTestGameMode.h"
#include "Unreal5_5GitLfsTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnreal5_5GitLfsTestGameMode::AUnreal5_5GitLfsTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
