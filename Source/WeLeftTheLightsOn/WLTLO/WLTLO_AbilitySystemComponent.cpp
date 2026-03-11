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
		// Get the active effect to retrieve current stack count
		if (const FActiveGameplayEffect* ActiveEffect = GetActiveGameplayEffect(Handle))
		{
			const int32 CurrentStackCount = ActiveEffect->Spec.StackCount;
			
			// Broadcast initial stack change
			FGameplayTagContainer EffectTags;
			if (ActiveEffect->Spec.Def)
			{
				EffectTags = ActiveEffect->Spec.Def->InheritableOwnedTagsContainer.CombinedTags;
			}
			
			BP_OnGameplayEffectStackChanged.Broadcast(
				Handle,
				CurrentStackCount,
				0,
				EffectTags);

			if (FOnActiveGameplayEffectStackChange* StackDelegate =
				OnGameplayEffectStackChangeDelegate(Handle))
			{
				StackDelegate->AddUObject(
					this,
					&UWLTLO_AbilitySystemComponent::HandleStackChanged);
			}
		}
	}
}

void UWLTLO_AbilitySystemComponent::HandleEffectRemoved(
	const FActiveGameplayEffect& ActiveEffect)
{
	const UGameplayEffect* Def = ActiveEffect.Spec.Def;
	const int32 LastStackCount = ActiveEffect.Spec.StackCount;

	// Broadcast stack change with 0 stacks before removal
	FGameplayTagContainer EffectTags;
	if (Def)
	{
		EffectTags = Def->InheritableOwnedTagsContainer.CombinedTags;
	}
	
	BP_OnGameplayEffectStackChanged.Broadcast(
		ActiveEffect.Handle,
		0,
		LastStackCount,
		EffectTags);

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
	if (const FActiveGameplayEffect* ActiveEffect = GetActiveGameplayEffect(Handle))
	{
		FGameplayTagContainer EffectTags;
		if (ActiveEffect->Spec.Def)
		{
			EffectTags = ActiveEffect->Spec.Def->InheritableOwnedTagsContainer.CombinedTags;
		}
		
		BP_OnGameplayEffectStackChanged.Broadcast(
			Handle,
			NewStackCount,
			OldStackCount,
			EffectTags);
	}
}