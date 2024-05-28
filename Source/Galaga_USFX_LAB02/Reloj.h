// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObserverPublicador.h"
#include "Reloj.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB02_API AReloj : public AObserverPublicador
{
	GENERATED_BODY()

public:
	AReloj();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float _DeltaTime) override;

private:
	FString Tiempo;

public:
	void CambioHora();
	void SetHora(FString _Hora);
	FORCEINLINE FString GetHora();
	
};
