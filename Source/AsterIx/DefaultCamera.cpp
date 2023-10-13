#include "DefaultCamera.h"

ADefaultCamera::ADefaultCamera()
{
	const auto PlayerController = GetWorld()->GetFirstPlayerController();
	PlayerController->SetViewTarget(this);
}