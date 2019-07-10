// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "Tank_PlayerController.h"



void ATank_PlayerController::BeginPlay()
{
    Super::BeginPlay();

    auto ControlledTank =  GetControlledTank();
    if (!ControlledTank)
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerController not Possesing a tank"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Player Controller possesing: %s"),*(ControlledTank->GetName()));
    }
}

// Called every frame
void ATank_PlayerController::Tick(float DeltaTime)
{
	Super::Tick( DeltaTime );
    AimTowardsCrosshair();
    UE_LOG(LogTemp, Warning, TEXT("AimCrossHair"));
}

ATank* ATank_PlayerController::GetControlledTank() const
{
    return Cast<ATank>(GetPawn());
}

void ATank_PlayerController::AimTowardsCrosshair ()
{
    if (!GetControlledTank()) {return;}

    //Get World location if linetrace through crosshair
        //If it is landscape
        // Tell controlled tank to aim at this point 
}