// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "CalcExec_DamageSimple.generated.h"

/**
 * 
 */
UCLASS()
class WELEFTTHELIGHTSON_API UCalcExec_DamageSimple : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
	
	UCalcExec_DamageSimple();

	virtual void Execute_Implementation(
		const FGameplayEffectCustomExecutionParameters& ExecutionParams, 
		FGameplayEffectCustomExecutionOutput& OutExecutionOutput
	) const override;
};
