#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "UExecCalculation_RadiationDamage.generated.h"

/**
 * 
 */
UCLASS()
class WELEFTTHELIGHTSON_API UUExecCalculation_RadiationDamage : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
	
public:
	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;
};
