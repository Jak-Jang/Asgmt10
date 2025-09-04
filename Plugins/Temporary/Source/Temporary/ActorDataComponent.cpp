// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorDataComponent.h"

UActorDataComponent::UActorDataComponent():
	MovementSpeed(1000.0f),
	JumpSpeed(1000.0f)
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UActorDataComponent::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Display, TEXT("Plugin(Temporary) Succeeded"));
}


