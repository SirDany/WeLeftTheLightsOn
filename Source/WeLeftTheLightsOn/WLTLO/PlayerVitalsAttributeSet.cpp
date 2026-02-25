#include "PlayerVitalsAttributeSet.h"
#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"

#define CLAMP(Current, Max) \
    Set##Current(FMath::Clamp(Get##Current(), 0.f, Get##Max()))

UPlayerVitalsAttributeSet::UPlayerVitalsAttributeSet()
{
    InitMovementSpeed(100.f);
    InitBaseMovementSpeed(100.f);

    InitHealth(100.f);
    InitMaxHealth(100.f);

    InitStamina(100.f);
    InitMaxStamina(100.f);

    InitOxygen(100.f);
    InitMaxOxygen(100.f);

    InitHunger(100.f);
    InitMaxHunger(100.f);

    InitThirst(100.f);
    InitMaxThirst(100.f);
}

void UPlayerVitalsAttributeSet::PostGameplayEffectExecute(
    const FGameplayEffectModCallbackData& Data)
{
    const FGameplayAttribute& Attr = Data.EvaluatedData.Attribute;

    if (Attr == GetHealthAttribute() || Attr == GetMaxHealthAttribute())
    {
        CLAMP(Health, MaxHealth);
        OnHealthChanged.Broadcast(
            Health.GetCurrentValue(),
            MaxHealth.GetCurrentValue()
        );
    }
    else if (Attr == GetStaminaAttribute() || Attr == GetMaxStaminaAttribute())
    {
        CLAMP(Stamina, MaxStamina);
        OnStaminaChanged.Broadcast(
            Stamina.GetCurrentValue(),
            MaxStamina.GetCurrentValue()
        );
    }
    else if (Attr == GetOxygenAttribute() || Attr == GetMaxOxygenAttribute())
    {
        CLAMP(Oxygen, MaxOxygen);
        OnOxygenChanged.Broadcast(
            Oxygen.GetCurrentValue(),
            MaxOxygen.GetCurrentValue()
        );
    }
    else if (Attr == GetHungerAttribute() || Attr == GetMaxHungerAttribute())
    {
        CLAMP(Hunger, MaxHunger);
        OnHungerChanged.Broadcast(
            Hunger.GetCurrentValue(),
            MaxHunger.GetCurrentValue()
        );
    }
    else if (Attr == GetThirstAttribute() || Attr == GetMaxThirstAttribute())
    {
        CLAMP(Thirst, MaxThirst);
        OnThirstChanged.Broadcast(
            Thirst.GetCurrentValue(),
            MaxThirst.GetCurrentValue()
        );
    }
    else if (Attr == GetMovementSpeedAttribute())
    {
        OnMovementSpeedChanged.Broadcast(
            MovementSpeed.GetCurrentValue()
        );
    }
    else if (Attr == GetBaseMovementSpeedAttribute())
    {
        OnBaseMovementSpeedChanged.Broadcast(
            BaseMovementSpeed.GetCurrentValue()
        );
    }
}

// ---------------- Replication ----------------

void UPlayerVitalsAttributeSet::OnRep_MovementSpeed(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, MovementSpeed, OldValue);
}

void UPlayerVitalsAttributeSet::OnRep_BaseMovementSpeed(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, BaseMovementSpeed, OldValue);
}

void UPlayerVitalsAttributeSet::OnRep_Health(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, Health, OldValue);
}

void UPlayerVitalsAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, MaxHealth, OldValue);
}

void UPlayerVitalsAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, Stamina, OldValue);
}

void UPlayerVitalsAttributeSet::OnRep_MaxStamina(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, MaxStamina, OldValue);
}

void UPlayerVitalsAttributeSet::OnRep_Oxygen(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, Oxygen, OldValue);
}

void UPlayerVitalsAttributeSet::OnRep_MaxOxygen(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, MaxOxygen, OldValue);
}

void UPlayerVitalsAttributeSet::OnRep_Hunger(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, Hunger, OldValue);
}

void UPlayerVitalsAttributeSet::OnRep_MaxHunger(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, MaxHunger, OldValue);
}

void UPlayerVitalsAttributeSet::OnRep_Thirst(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, Thirst, OldValue);
}

void UPlayerVitalsAttributeSet::OnRep_MaxThirst(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerVitalsAttributeSet, MaxThirst, OldValue);
}

void UPlayerVitalsAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    // GAS handles replication, so just call the super
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(UPlayerVitalsAttributeSet, MovementSpeed);
    DOREPLIFETIME(UPlayerVitalsAttributeSet, BaseMovementSpeed);
    DOREPLIFETIME(UPlayerVitalsAttributeSet, Health);
    DOREPLIFETIME(UPlayerVitalsAttributeSet, MaxHealth);
    DOREPLIFETIME(UPlayerVitalsAttributeSet, Stamina);
    DOREPLIFETIME(UPlayerVitalsAttributeSet, MaxStamina);
    DOREPLIFETIME(UPlayerVitalsAttributeSet, Oxygen);
    DOREPLIFETIME(UPlayerVitalsAttributeSet, MaxOxygen);
    DOREPLIFETIME(UPlayerVitalsAttributeSet, Hunger);
    DOREPLIFETIME(UPlayerVitalsAttributeSet, MaxHunger);
    DOREPLIFETIME(UPlayerVitalsAttributeSet, Thirst);
    DOREPLIFETIME(UPlayerVitalsAttributeSet, MaxThirst);
}

void UPlayerVitalsAttributeSet::PrintAllAttributes()
{
    UClass* Class = GetClass();

    for (TFieldIterator<FProperty> PropIt(Class); PropIt; ++PropIt)
    {
        FProperty* Property = *PropIt;

        // Only handle FGameplayAttributeData properties
        if (FStructProperty* StructProp = CastField<FStructProperty>(Property))
        {
            if (StructProp->Struct == FGameplayAttributeData::StaticStruct())
            {
                void* ValuePtr = StructProp->ContainerPtrToValuePtr<void>(this);
                FGameplayAttributeData* AttrData = reinterpret_cast<FGameplayAttributeData*>(ValuePtr);

                if (AttrData)
                {
                    float Val = AttrData->GetCurrentValue();

                    // Log to Output Log
                    UE_LOG(LogTemp, Warning, TEXT("%s = %.2f"), *Property->GetName(), Val);

                    // Also display on screen
                    if (GEngine)
                    {
                        GEngine->AddOnScreenDebugMessage(
                            -1, // new message each time
                            5.f, // duration
                            FColor::Yellow,
                            FString::Printf(TEXT("%s = %.2f"), *Property->GetName(), Val)
                        );
                    }
                }
            }
        }
    }
}