// Fill out your copyright notice in the Description page of Project Settings.

#include "CannonComponent.h"

// Sets default values
ACannonComponent::ACannonComponent()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACannonComponent::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACannonComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	time += DeltaTime;

	if (time >= fireInterval)
	{
		FireCannonBall();
		time = 0.f;
	}
}

void ACannonComponent::FireCannonBall()
{
	if (ProjectileClass)
	{
		FVector SpawnLocation = GetActorLocation() + FVector(0, 100, 0);

		FRotator SpawnRotation = GetActorRotation();

		AActor* SpawnedProjectile = GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnLocation, SpawnRotation);
	}
}

