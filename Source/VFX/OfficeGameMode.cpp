#include "OfficeGameMode.h"

#include "OfficeFirstPersonPawn.h"

AOfficeGameMode::AOfficeGameMode()
{
	DefaultPawnClass = AOfficeFirstPersonPawn::StaticClass();
}
