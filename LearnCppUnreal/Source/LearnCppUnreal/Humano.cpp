#include "Humano.h"


void AHumano::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hola, mi nombre es %s"), *name);
}