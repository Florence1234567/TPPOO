// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TPPOOGameMode.generated.h"

UCLASS(minimalapi)
class ATPPOOGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATPPOOGameMode();
	
	virtual void RestartPlayer(AController* NewPlayer) override;

	void StartTimer();

	void EndTimer();

	void ResetTimer();

	void IncrementScore();

	void ResetScore();

	UPROPERTY(VisibleAnywhere, Category = "Timer") float time;

	UPROPERTY(VisibleAnywhere, Category = "Timer") bool bTimerIsRunning;

	UPROPERTY(VisibleAnywhere, Category = "Score") float score;

	float bestTime;

protected:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UFUNCTION() virtual void PlayerDied(ACharacter* Character);
};