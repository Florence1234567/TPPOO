// Fill out your copyright notice in the Description page of Project Settings.

#include "TimerZone.h"
#include "TPPOOCharacter.h"
#include "TPPOOGameMode.h"

ATimerZone::ATimerZone()
{

}

void ATimerZone::BeginPlay()
{
	Super::BeginPlay();

	OnActorBeginOverlap.AddDynamic(this, &ATimerZone::OnOverLapBegin);
	OnActorEndOverlap.AddDynamic(this, &ATimerZone::OnOverLapEnd);
}

void ATimerZone::OnOverLapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor && zoneType == TimeZoneType::End)
	{
		ATPPOOCharacter* Character = Cast<ATPPOOCharacter>(OtherActor);

		if (Character)
			if (UWorld* World = GetWorld())
				if (ATPPOOGameMode* GameMode = Cast<ATPPOOGameMode>(World->GetAuthGameMode()))
					GameMode->EndTimer();
	}
}

void ATimerZone::OnOverLapEnd(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor && zoneType == TimeZoneType::Start)
	{
		ATPPOOCharacter* Character = Cast<ATPPOOCharacter>(OtherActor);

		if (Character)
			if (UWorld* World = GetWorld())
				if (ATPPOOGameMode* GameMode = Cast<ATPPOOGameMode>(World->GetAuthGameMode()))
					GameMode->StartTimer();
	}
}