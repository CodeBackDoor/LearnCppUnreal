// Fill out your copyright notice in the Description page of Project Settings.

#include "Demo.h"


// Sets default values
ADemo::ADemo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADemo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADemo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("Mostrando por consola !!"));
}

