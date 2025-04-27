// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemSpeed.h"
#include "TPPOOCharacter.h"
#include "Kismet/GameplayStatics.h"

void AItemSpeed::OnCollected()
{
	if (ATPPOOCharacter* MyCharacter = Cast<ATPPOOCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0)))
		MyCharacter->IncreaseSpeed();
}