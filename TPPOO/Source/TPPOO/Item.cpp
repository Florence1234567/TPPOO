// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "TPPOOCharacter.h"
#include "TPPOOGameMode.h"

// Sets default values
AItem::AItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	RootComponent = Mesh;

	Mesh->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
}

void AItem::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Verifier si cst le bon player
	if (OtherActor)
	{
		ATPPOOCharacter* Character = Cast<ATPPOOCharacter>(OtherActor);

		if (Character)
		{
			OnCollected();

			SetActorHiddenInGame(true);
			SetActorEnableCollision(false);
		}
	}
}

void AItem::RespawnItem()
{
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
}

