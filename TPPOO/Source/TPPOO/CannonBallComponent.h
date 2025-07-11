// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CannonBallComponent.generated.h"

UCLASS()
class TPPOO_API ACannonBallComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACannonBallComponent();

	UPROPERTY(VisibleAnywhere, Category = "Settings") UStaticMeshComponent* Mesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float speed = 1000.f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
