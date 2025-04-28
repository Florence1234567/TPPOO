// Fill out your copyright notice in the Description page of Project Settings.


#include "CannonBallComponent.h"

// Sets default values
ACannonBallComponent::ACannonBallComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACannonBallComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACannonBallComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

