// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemPoint.h"
#include "TPPOOGameMode.h"

void AItemPoint::OnCollected()
{
	if (UWorld* World = GetWorld())
	{
		ATPPOOGameMode* GameMode = Cast<ATPPOOGameMode>(World->GetAuthGameMode());

		if (GameMode)
			GameMode->IncrementScore();
	}
}
