#include "DefaultCamera.h"

void ADefaultCamera::BeginPlay()
{
	Super::BeginPlay();

	const auto PlayerController = GetWorld()->GetFirstPlayerController();
	PlayerController->SetViewTarget(this);
}