// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ISubscriptor.h"
#include "ISolicitar.h"
#include "NaveSubscriptora1.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API ANaveSubscriptora1 : public AActor, public IISubscriptor, public IISolicitar
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))

	class UStaticMeshComponent* MallaNave1;
	
public:	
	// Sets default values for this actor's properties
	ANaveSubscriptora1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void EstablecerReloj(class AReloj* _RelojSubscriptor);
	void Actualizar(AObserverPublicador* _Publicador) override;
	void SolicitarSubscriptor() override;
	void DestruirSubscripcion();

	FString Tiempo;

private:
	UPROPERTY(VisibleAnywhere, Category = "Subscriptor")
	class AReloj* Reloj;

};
