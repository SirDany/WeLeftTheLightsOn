#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffectTypes.h" 
#include "FAttributeWithMax.h"
#include "PlayerVitalsAttributeSet.generated.h"

// Macro to create standard GAS attribute accessors
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * Player Vitals Attribute Set
 */
UCLASS()
class WELEFTTHELIGHTSON_API UPlayerVitalsAttributeSet : public UAttributeSet
{
    GENERATED_BODY()

public:
    UPlayerVitalsAttributeSet();

    // Health
    UPROPERTY(BlueprintReadOnly, Category = "Vitals", ReplicatedUsing = OnRep_Health)
    FAttributeWithMax Health;

    // Stamina
    UPROPERTY(BlueprintReadOnly, Category = "Vitals", ReplicatedUsing = OnRep_Stamina)
    FAttributeWithMax Stamina;

    // Oxygen
    UPROPERTY(BlueprintReadOnly, Category = "Vitals", ReplicatedUsing = OnRep_Oxygen)
    FAttributeWithMax Oxygen;

    // Hunger
    UPROPERTY(BlueprintReadOnly, Category = "Vitals", ReplicatedUsing = OnRep_Hunger)
    FAttributeWithMax Hunger;

    // Thirst
    UPROPERTY(BlueprintReadOnly, Category = "Vitals", ReplicatedUsing = OnRep_Thirst)
    FAttributeWithMax Thirst;

    // Debug function: prints all FAttributeWithMax properties (Health, Stamina, etc.)
    UFUNCTION(BlueprintCallable, Category = "Debug")
    void PrintAllVitals();

protected:

    // Replication callbacks
    UFUNCTION()
    void OnRep_Health(const FAttributeWithMax& OldValue);

    UFUNCTION()
    void OnRep_Stamina(const FAttributeWithMax& OldValue);

    UFUNCTION()
    void OnRep_Oxygen(const FAttributeWithMax& OldValue);

    UFUNCTION()
    void OnRep_Hunger(const FAttributeWithMax& OldValue);

    UFUNCTION()
    void OnRep_Thirst(const FAttributeWithMax& OldValue);
};
