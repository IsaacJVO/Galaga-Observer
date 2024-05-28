// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TiempoReloj.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API ATiempoReloj : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATiempoReloj();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
