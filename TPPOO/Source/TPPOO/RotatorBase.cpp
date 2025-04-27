// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatorBase.h"

// Sets default values for this component's properties
URotatorBase::URotatorBase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URotatorBase::BeginPlay()
{
	Super::BeginPlay();

	if (!GetOwner()) { return; }

	if (rotationAxis.IsNearlyZero())
		rotationAxis = FVector(0.0f, 0.0f, 1.0f);
}


// Called every frame
void URotatorBase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateRotation(DeltaTime);
}

void URotatorBase::UpdateRotation(float DeltaTime)
{
	AActor* owner = GetOwner();
	if (!owner) return;

	float rotationOffset = rotationSpeed * DeltaTime;

	if (bCanRotateBackAndForth)
	{
		currentRotationAngle += rotationOffset + rotationDirection;

		if (FMath::Abs(currentRotationAngle) >= rotationRange)
		{
			rotationDirection *= -1;
			currentRotationAngle = FMath::Clamp(currentRotationAngle, -rotationRange, rotationRange);
		}

		rotationOffset *= rotationDirection;
	}

	FRotator currentRotation = owner->GetActorRotation();
	FRotator rotationDelta = FRotator(rotationAxis.X * rotationOffset, rotationAxis.Y * rotationOffset, rotationAxis.Z * rotationOffset);

	owner->SetActorRotation(currentRotation + rotationDelta);
}