#include "Galaga_USFX_LAB02GameMode.h"
#include "Galaga_USFX_LAB02Pawn.h"
#include "FacadeNaves.h"


AGalaga_USFX_LAB02GameMode::AGalaga_USFX_LAB02GameMode()
{
    DefaultPawnClass = AGalaga_USFX_LAB02Pawn::StaticClass();
}

void AGalaga_USFX_LAB02GameMode::BeginPlay()
{
    Super::BeginPlay();

    FacadeNaves = GetWorld()->SpawnActor<AFacadeNaves>(AFacadeNaves::StaticClass());
    FacadeNaves->SPAWN_NAVES_ENEMIGAS();
    FacadeNaves->SpawnPowerUpVelocidad();

}