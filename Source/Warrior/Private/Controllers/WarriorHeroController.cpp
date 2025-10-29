// JWLee copyright


#include "Controllers/WarriorHeroController.h"

#include "EnhancedInputSubsystems.h"


AWarriorHeroController::AWarriorHeroController()
{
    HeroTeamID = FGenericTeamId(0);

    bShowMouseCursor = true;
    bEnableClickEvents = true;
    bEnableMouseOverEvents = true;

}

FGenericTeamId AWarriorHeroController::GetGenericTeamId() const
{
    return HeroTeamID;
}


