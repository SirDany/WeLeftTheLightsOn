#pragma once

#include "GameplayEffectExecutionCalculation.h"
#include "DamageExecution.generated.h"

UCLASS()
class WELEFTTHELIGHTSON_API UDamageExecution : public UGameplayEffectExecutionCalculation
{
    GENERATED_BODY()

public:
    UDamageExecution();

    virtual void Execute_Implementation(
        const FGameplayEffectCustomExecutionParameters& ExecutionParams,
        FGameplayEffectCustomExecutionOutput& OutExecutionOutput
    ) const override;
};
