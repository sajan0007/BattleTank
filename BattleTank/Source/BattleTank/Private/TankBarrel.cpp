// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"
#include "BattleTank.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	//Move the barrel the right omount this frame
	//Given a max elevatopm s[eed. amd the fra,e time
	UE_LOG(LogTemp, Warning, TEXT("Barrel-Elevate() called at speed %f"), DegreesPerSecond);
}


