#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffect.h"    
#include "WLTLO_AbilitySystemComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FWLTLO_OnGameplayEffectApplied,
	const FGameplayEffectSpec&, EffectSpec,
	FActiveGameplayEffectHandle, EffectHandle);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FWLTLO_OnGameplayEffectRemoved,
	const UGameplayEffect*, EffectClass,
	FActiveGameplayEffectHandle, EffectHandle);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
	FWLTLO_OnGameplayEffectStackChanged,
	FActiveGameplayEffectHandle, EffectHandle,
	int32, NewStackCount,
	int32, OldStackCount);

UCLASS()
class WELEFTTHELIGHTSON_API UWLTLO_AbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable, Category = "GAS|Effects")
	FWLTLO_OnGameplayEffectApplied BP_OnGameplayEffectApplied;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Effects")
	FWLTLO_OnGameplayEffectRemoved BP_OnGameplayEffectRemoved;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Effects")
	FWLTLO_OnGameplayEffectStackChanged BP_OnGameplayEffectStackChanged;

protected:

	virtual void BeginPlay() override;

private:

	void HandleEffectApplied(
		UAbilitySystemComponent* ASC,
		const FGameplayEffectSpec& Spec,
		FActiveGameplayEffectHandle Handle);

	void HandleEffectRemoved(
		const FActiveGameplayEffect& ActiveEffect);

	void HandleStackChanged(
		FActiveGameplayEffectHandle Handle,
		int32 NewStackCount,
		int32 OldStackCount);
};