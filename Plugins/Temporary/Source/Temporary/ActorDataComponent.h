// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorDataComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEMPORARY_API UActorDataComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UActorDataComponent();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Temporary")
	float MovementSpeed;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Temporary")
	float JumpSpeed;

protected:
	virtual void BeginPlay() override;	
};
