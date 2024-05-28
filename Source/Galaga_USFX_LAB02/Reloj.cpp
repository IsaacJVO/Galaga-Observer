// Fill out your copyright notice in the Description page of Project Settings.


#include "Reloj.h"

AReloj::AReloj()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AReloj::BeginPlay()
{
	Super::BeginPlay();
}

void AReloj::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AReloj::CambioHora()
{
	NotificadorSubscriptores();
}

void AReloj::SetHora(FString _Hora)
{
	Tiempo = _Hora;
	CambioHora();
}

FString AReloj::GetHora()
{
	return Tiempo;

}
