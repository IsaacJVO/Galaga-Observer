// Fill out your copyright notice in the Description page of Project Settings.


#include "ObserverPublicador.h"
#include "ISubscriptor.h"

// Sets default values
AObserverPublicador::AObserverPublicador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Subscriptores = TArray<AActor*>();
}

// Called when the game starts or when spawned
void AObserverPublicador::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AObserverPublicador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AObserverPublicador::Subscribirse(AActor* _Subscriptor)
{
	Subscriptores.Add(_Subscriptor);
}

void AObserverPublicador::DeSubscribirse(AActor* _Subscriptor)
{
	Subscriptores.Remove(_Subscriptor);
}

void AObserverPublicador::NotificadorSubscriptores()
{
	for (AActor* Subs : Subscriptores) {
		ISuscriptor = Cast<IISuscriptor>(Subs);
		if (ISuscriptor) {
			ISuscriptor->Actualizar(this);
		}
	}
}

