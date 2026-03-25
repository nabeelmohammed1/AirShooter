// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "AS_GameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class AIRSHOOTER_API UAS_GameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	bool ShouldShowInAbilitiesBar = false;

};
