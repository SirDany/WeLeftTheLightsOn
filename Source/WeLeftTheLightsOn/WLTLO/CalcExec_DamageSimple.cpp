// Fill out your copyright notice in the Description page of Project Settings.


#include "WLTLO/CalcExec_DamageSimple.h"
#include "WLTLO/PlayerVitalsAttributeSet.h"

// Example: Struct to capture attributes
//struct DamageCapture
//{
//	DECLARE_ATTRIBUTE_CAPTUREDEF(Health);
//
//	DamageCapture()
//	{
//		DEFINE_ATTRIBUTE_CAPTUREDEF(
//			UPlayerVitalsAttributeSet,
//			Health,
//			Target,
//			false
//		);
//	}
//};

// Example: Helper to read captured attribute
//static DamageCapture& GetDamageCapture()
//{
//	static DamageCapture DamageCapture;
//	return DamageCapture;
//}

UCalcExec_DamageSimple::UCalcExec_DamageSimple()
{
	// Example: Capture attribtue
	// RelevantAttributesToCapture.Add(GetDamageCapture().HealthDef);
}

void UCalcExec_DamageSimple::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	// =================
	// Boilerplate setup
	// =================
	UAbilitySystemComponent* TargetABSC = ExecutionParams.GetTargetAbilitySystemComponent();
	AActor* TargetActor = TargetABSC ? TargetABSC->GetAvatarActor() : nullptr;

	UAbilitySystemComponent* SourceABSC = ExecutionParams.GetSourceAbilitySystemComponent();
	AActor* SourceActor = SourceABSC ? SourceABSC->GetAvatarActor() : nullptr;

	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	EvaluationParameters.TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();
	// =================
	// Boilerplate setup
	// =================


	// Example: Read captured attribute
	// float Health = 0.0f;
	// ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetDamageCapture().HealthDef, EvaluationParameters, Health);

	const FGameplayTag DamageTag =
		FGameplayTag::RequestGameplayTag(FName("Effect.Damage"));

	const float IncomingDamage =
		Spec.GetSetByCallerMagnitude(DamageTag, false, 0.f);

	if (IncomingDamage <= 0.f)
	{
		return;
	}

	OutExecutionOutput.AddOutputModifier(
		FGameplayModifierEvaluatedData(UPlayerVitalsAttributeSet::GetHealthAttribute(), EGameplayModOp::Additive, -IncomingDamage)
	);
};