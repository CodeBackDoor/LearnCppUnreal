// Fill out your copyright notice in the Description page of Project Settings.

#include "Demo.h"
#include "Engine/GameEngine.h"


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

	float value = 0.0f;
	FString Msg = FString::Printf(TEXT("Tiempo: %s"), FString ::SanitizeFloat(value));
	GEngine->AddOnScreenDebugMessage(0, 0.0f, FColor::Blue, Msg);
}

