#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h" 
#include "AbilitySystemComponent.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectExtension.h"
#include "PlayerVitalsAttributeSet.generated.h"

// Standard GAS accessor macro
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

// Declare the delegate type at the top
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttributePairChanged, float, CurrentValue, float, MaxValue);

/**
 * Player Vitals Attribute Set (GAS-compliant)
 */
UCLASS()
class WELEFTTHELIGHTSON_API UPlayerVitalsAttributeSet : public UAttributeSet
{
    GENERATED_BODY()

public:
    UPlayerVitalsAttributeSet();

    // -------------------- Health --------------------
    UPROPERTY(BlueprintReadOnly, Category = "Vitals|Health", ReplicatedUsing = OnRep_Health)
    FGameplayAttributeData Health;
    ATTRIBUTE_ACCESSORS(UPlayerVitalsAttributeSet, Health)

        UPROPERTY(BlueprintReadOnly, Category = "Vitals|Health", ReplicatedUsing = OnRep_MaxHealth)
    FGameplayAttributeData MaxHealth;
    ATTRIBUTE_ACCESSORS(UPlayerVitalsAttributeSet, MaxHealth)

        // -------------------- Stamina --------------------
        UPROPERTY(BlueprintReadOnly, Category = "Vitals|Stamina", ReplicatedUsing = OnRep_Stamina)
    FGameplayAttributeData Stamina;
    ATTRIBUTE_ACCESSORS(UPlayerVitalsAttributeSet, Stamina)

        UPROPERTY(BlueprintReadOnly, Category = "Vitals|Stamina", ReplicatedUsing = OnRep_MaxStamina)
    FGameplayAttributeData MaxStamina;
    ATTRIBUTE_ACCESSORS(UPlayerVitalsAttributeSet, MaxStamina)

        // -------------------- Oxygen --------------------
        UPROPERTY(BlueprintReadOnly, Category = "Vitals|Oxygen", ReplicatedUsing = OnRep_Oxygen)
    FGameplayAttributeData Oxygen;
    ATTRIBUTE_ACCESSORS(UPlayerVitalsAttributeSet, Oxygen)

        UPROPERTY(BlueprintReadOnly, Category = "Vitals|Oxygen", ReplicatedUsing = OnRep_MaxOxygen)
    FGameplayAttributeData MaxOxygen;
    ATTRIBUTE_ACCESSORS(UPlayerVitalsAttributeSet, MaxOxygen)

        // -------------------- Hunger --------------------
        UPROPERTY(BlueprintReadOnly, Category = "Vitals|Hunger", ReplicatedUsing = OnRep_Hunger)
    FGameplayAttributeData Hunger;
    ATTRIBUTE_ACCESSORS(UPlayerVitalsAttributeSet, Hunger)

        UPROPERTY(BlueprintReadOnly, Category = "Vitals|Hunger", ReplicatedUsing = OnRep_MaxHunger)
    FGameplayAttributeData MaxHunger;
    ATTRIBUTE_ACCESSORS(UPlayerVitalsAttributeSet, MaxHunger)

        // -------------------- Thirst --------------------
        UPROPERTY(BlueprintReadOnly, Category = "Vitals|Thirst", ReplicatedUsing = OnRep_Thirst)
    FGameplayAttributeData Thirst;
    ATTRIBUTE_ACCESSORS(UPlayerVitalsAttributeSet, Thirst)

        UPROPERTY(BlueprintReadOnly, Category = "Vitals|Thirst", ReplicatedUsing = OnRep_MaxThirst)
    FGameplayAttributeData MaxThirst;
    ATTRIBUTE_ACCESSORS(UPlayerVitalsAttributeSet, MaxThirst)

        // Debug function
        UFUNCTION(BlueprintCallable, Category = "Debug")
    void PrintAllAttributes();

    UPROPERTY(BlueprintAssignable, Category = "Attributes|Health")
    FOnAttributePairChanged  OnHealthChanged;

    UPROPERTY(BlueprintAssignable, Category = "Attributes|Stamina")
    FOnAttributePairChanged  OnStaminaChanged;

    UPROPERTY(BlueprintAssignable, Category = "Attributes|Oxygen")
    FOnAttributePairChanged  OnOxygenChanged;

    UPROPERTY(BlueprintAssignable, Category = "Attributes|Hunger")
    FOnAttributePairChanged  OnHungerChanged;

    UPROPERTY(BlueprintAssignable, Category = "Attributes|Thirst")
    FOnAttributePairChanged  OnThirstChanged;

protected:
    // Central clamp point
    virtual void PostGameplayEffectExecute(
        const FGameplayEffectModCallbackData& Data) override;

    // Replication callbacks
    UFUNCTION() void OnRep_Health(const FGameplayAttributeData& OldValue);
    UFUNCTION() void OnRep_MaxHealth(const FGameplayAttributeData& OldValue);

    UFUNCTION() void OnRep_Stamina(const FGameplayAttributeData& OldValue);
    UFUNCTION() void OnRep_MaxStamina(const FGameplayAttributeData& OldValue);

    UFUNCTION() void OnRep_Oxygen(const FGameplayAttributeData& OldValue);
    UFUNCTION() void OnRep_MaxOxygen(const FGameplayAttributeData& OldValue);

    UFUNCTION() void OnRep_Hunger(const FGameplayAttributeData& OldValue);
    UFUNCTION() void OnRep_MaxHunger(const FGameplayAttributeData& OldValue);

    UFUNCTION() void OnRep_Thirst(const FGameplayAttributeData& OldValue);
    UFUNCTION() void OnRep_MaxThirst(const FGameplayAttributeData& OldValue);
};
