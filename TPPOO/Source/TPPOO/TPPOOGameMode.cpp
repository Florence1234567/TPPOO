// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPPOOGameMode.h"
#include "TPPOOCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Item.h"
#include "EngineUtils.h"

ATPPOOGameMode::ATPPOOGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
		DefaultPawnClass = PlayerPawnBPClass.Class;

	PrimaryActorTick.bCanEverTick = true;
}

void ATPPOOGameMode::RestartPlayer(AController* NewPlayer)
{
	Super::RestartPlayer(NewPlayer);

	ResetTimer();
	ResetScore();

	for (TActorIterator<AItem> It(GetWorld()); It; ++It)
		(*It)->RespawnItem();
}

void ATPPOOGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void ATPPOOGameMode::PlayerDied(ACharacter* Character)
{
	AController* CharacterController = Character->GetController();
	RestartPlayer(CharacterController);
}

void ATPPOOGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 1.f, FColor::White, FString::Printf(TEXT("Time : %f"), time));
		GEngine->AddOnScreenDebugMessage(2, 1.f, FColor::White, FString::Printf(TEXT("Score : %f"), score));
		GEngine->AddOnScreenDebugMessage(3, 1.f, FColor::White, FString::Printf(TEXT("Best time : %f"), bestTime));
	}

	if (bTimerIsRunning)
		time += DeltaTime;
}

void ATPPOOGameMode::StartTimer()
{
	bTimerIsRunning = true;
	time = 0;
}

void ATPPOOGameMode::EndTimer()
{
	bTimerIsRunning = false;

	if (bestTime == 0 || time < bestTime)
		bestTime = time;
}

void ATPPOOGameMode::ResetTimer()
{
	bTimerIsRunning = false;
	time = 0;
}

void ATPPOOGameMode::IncrementScore()
{
	score++;
}

void ATPPOOGameMode::ResetScore()
{
	score = 0;
}