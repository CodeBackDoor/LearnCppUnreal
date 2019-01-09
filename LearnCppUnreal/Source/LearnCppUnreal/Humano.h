#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Humano.generated.h"

UCLASS()
class LEARNCPPUNREAL_API AHumano : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString name = "Moon";
	UPROPERTY(VisibleAnywhere)
	int32 edad = 30;

protected:
	virtual void BeginPlay() override;
};
