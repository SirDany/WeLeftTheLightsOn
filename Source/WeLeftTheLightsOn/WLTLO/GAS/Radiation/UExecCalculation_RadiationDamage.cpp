#include "WLTLO/GAS/Radiation/UExecCalculation_RadiationDamage.h"
#include "PlayerVitalsAttributeSet.h"

void UUExecCalculation_RadiationDamage::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{

	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();
	const int32 StackCount = Spec.GetStackCount();

	if(StackCount <= 0)
	{
		return;
	}

	const float radiationPct = FMath::Clamp(StackCount / 100.f, 0.f, 1.f);

	const float dPS = FMath::Square(radiationPct) * 10.f; // Example damage per second calculation based on radiation percentage

	const float period = Spec.GetPeriod();

	const float dmgThisTick = dPS * period;


	OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(
			UPlayerVitalsAttributeSet::GetHealthAttribute(),
			EGameplayModOp::Additive,
			-dmgThisTick));

	
}