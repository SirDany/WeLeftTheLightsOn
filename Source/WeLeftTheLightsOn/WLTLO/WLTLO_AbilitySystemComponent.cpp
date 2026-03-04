#include "WLTLO_AbilitySystemComponent.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"

void UWLTLO_AbilitySystemComponent::BeginPlay()
{
	Super::BeginPlay();

	// Effect added (fires on server and predicting client)
	OnActiveGameplayEffectAddedDelegateToSelf.AddUObject(
		this,
		&UWLTLO_AbilitySystemComponent::HandleEffectApplied);

	// Effect removed
	OnAnyGameplayEffectRemovedDelegate().AddUObject(
		this,
		&UWLTLO_AbilitySystemComponent::HandleEffectRemoved);

	// DO NOT bind stack change here.
	// Stack delegates are per-handle and must be bound after application.
}

void UWLTLO_AbilitySystemComponent::HandleEffectApplied(
	UAbilitySystemComponent* ASC,
	const FGameplayEffectSpec& Spec,
	FActiveGameplayEffectHandle Handle)
{
	// Forward to Blueprint
	BP_OnGameplayEffectApplied.Broadcast(Spec, Handle);

	// Bind stack change delegate for this specific handle
	if (Handle.IsValid())
	{
		if (FOnActiveGameplayEffectStackChange* StackDelegate =
			OnGameplayEffectStackChangeDelegate(Handle))
		{
			StackDelegate->AddUObject(
				this,
				&UWLTLO_AbilitySystemComponent::HandleStackChanged);
		}
	}
}

void UWLTLO_AbilitySystemComponent::HandleEffectRemoved(
	const FActiveGameplayEffect& ActiveEffect)
{
	const UGameplayEffect* Def = ActiveEffect.Spec.Def;

	BP_OnGameplayEffectRemoved.Broadcast(
		Def,
		ActiveEffect.Handle);

	// No manual unbind required.
	// When the effect is removed, its stack delegate is destroyed internally.
}

void UWLTLO_AbilitySystemComponent::HandleStackChanged(
	FActiveGameplayEffectHandle Handle,
	int32 NewStackCount,
	int32 OldStackCount)
{
	BP_OnGameplayEffectStackChanged.Broadcast(
		Handle,
		NewStackCount,
		OldStackCount);
}