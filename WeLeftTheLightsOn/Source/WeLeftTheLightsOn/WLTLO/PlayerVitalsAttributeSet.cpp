#include "PlayerVitalsAttributeSet.h"
#include "Net/UnrealNetwork.h"

UPlayerVitalsAttributeSet::UPlayerVitalsAttributeSet()
{
    // Initialize default values
    Health.Current.SetCurrentValue(100.f);
    Health.Max.SetCurrentValue(100.f);

    Stamina.Current.SetCurrentValue(100.f);
    Stamina.Max.SetCurrentValue(100.f);

    Oxygen.Current.SetCurrentValue(100.f);
    Oxygen.Max.SetCurrentValue(100.f);

    Hunger.Current.SetCurrentValue(100.f);
    Hunger.Max.SetCurrentValue(100.f);

    Thirst.Current.SetCurrentValue(100.f);
    Thirst.Max.SetCurrentValue(100.f);
}

// --------------------- OnRep Callbacks ---------------------

void UPlayerVitalsAttributeSet::OnRep_Health(const FAttributeWithMax& OldValue)
{
    Health.ClampCurrent();
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, Health.Current, OldValue.Current);
}

void UPlayerVitalsAttributeSet::OnRep_Stamina(const FAttributeWithMax& OldValue)
{
    Stamina.ClampCurrent();
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, Stamina.Current, OldValue.Current);
}

void UPlayerVitalsAttributeSet::OnRep_Oxygen(const FAttributeWithMax& OldValue)
{
    Oxygen.ClampCurrent();
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, Oxygen.Current, OldValue.Current);
}

void UPlayerVitalsAttributeSet::OnRep_Hunger(const FAttributeWithMax& OldValue)
{
    Hunger.ClampCurrent();
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, Hunger.Current, OldValue.Current);
}

void UPlayerVitalsAttributeSet::OnRep_Thirst(const FAttributeWithMax& OldValue)
{
    Thirst.ClampCurrent();
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, Thirst.Current, OldValue.Current);
}


void UPlayerVitalsAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	// GAS handles replication, so just call the super
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}