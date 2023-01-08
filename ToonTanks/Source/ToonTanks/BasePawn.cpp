// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ABasePawn::ABasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent;
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Colider"));
	RootComponent = CapsuleComp;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	BaseMesh->SetupAttachment(CapsuleComp);

	TerretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Terret Mesh"));
	TerretMesh->SetupAttachment(BaseMesh);

	ProjectileSpawnPont = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn Pont"));
	ProjectileSpawnPont->SetupAttachment(TerretMesh);
}



<<<<<<< HEAD
=======
	//FVector DeltaLocation(0.f);
	//DeltaLocation.X = 2.f;
	//AddActorLocalOffset(DeltaLocation);
}
>>>>>>> main



