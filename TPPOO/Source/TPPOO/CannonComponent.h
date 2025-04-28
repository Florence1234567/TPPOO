// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CannonComponent.generated.h"

UCLASS()
class TPPOO_API ACannonComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACannonComponent();

	void FireCannonBall();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere) TSubclassOf<AActor> ProjectileClass;

	float time;

	float fireInterval = 5.f;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
