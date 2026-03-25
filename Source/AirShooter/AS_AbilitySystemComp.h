// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AS_AbilitySystemComp.generated.h"

/**
 * 
 */
UCLASS()
class AIRSHOOTER_API UAS_AbilitySystemComp : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
protected:
	TArray<FGameplayAbilitySpec> LastActivationAbilities;


public:
	UAS_AbilitySystemComp();

protected:
	virtual void BeginPlay() override;
	void OnRep_ActivateAbilities() override;

public:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
