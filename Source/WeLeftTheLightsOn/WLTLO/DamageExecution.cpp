#include "DamageExecution.h"
#include "AbilitySystemComponent.h"
#include "PlayerVitalsAttributeSet.h"
#include "GameplayEffectTypes.h"

struct FDamageExecutionStatics
{
    DECLARE_ATTRIBUTE_CAPTUREDEF(Health);

    FDamageExecutionStatics()
    {
        DEFINE_ATTRIBUTE_CAPTUREDEF(
            UPlayerVitalsAttributeSet,
            Health,
            Target,
            false
        );
    }
};

static const FDamageExecutionStatics DamageStatics;

UDamageExecution::UDamageExecution()
{
    RelevantAttributesToCapture.Add(DamageStatics.HealthDef);
}

void UDamageExecution::Execute_Implementation(
    const FGameplayEffectCustomExecutionParameters& ExecutionParams,
    FGameplayEffectCustomExecutionOutput& OutExecutionOutput
) const
{
    const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();

    // Read positive damage value
    const float Damage = Spec.GetSetByCallerMagnitude(
        FGameplayTag::RequestGameplayTag(FName("Effect.Damage")),
        false,
        0.f
    );

    if (Damage <= 0.f)
    {
        return;
    }

    // Apply as negative delta to Health
    OutExecutionOutput.AddOutputModifier(
        FGameplayModifierEvaluatedData(
            DamageStatics.HealthProperty,
            EGameplayModOp::Additive,
            -Damage
        )
    );
}
