// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LabrinthHUD.generated.h"

UCLASS()
class ALabrinthHUD : public AHUD
{
	GENERATED_BODY()

public:
	ALabrinthHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

