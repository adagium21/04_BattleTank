// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "CoreMinimal.h"
#include "Tank_PlayerController.generated.h"


/**
 * 
 */
UCLASS()
class BATTLETANK_API ATank_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATank* GetControlledTank() const;
	
	virtual void BeginPlay() override;

	virtual void Tick (float DeltaTime) override;

	//Start the tank moving the barrel towards the target
	void AimTowardsCrosshair();
};
