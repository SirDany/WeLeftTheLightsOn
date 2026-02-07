#include "PlayerVitalsAttributeSet.h"
#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"

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

// Debugging attributes
void UPlayerVitalsAttributeSet::PrintAllVitals()
{
    UClass* Class = GetClass();

    for (TFieldIterator<FProperty> PropIt(Class); PropIt; ++PropIt)
    {
        FProperty* Property = *PropIt;

        if (FStructProperty* StructProp = CastField<FStructProperty>(Property))
        {
            if (StructProp->Struct == FAttributeWithMax::StaticStruct())
            {
                void* PropValuePtr = StructProp->ContainerPtrToValuePtr<void>(this);
                FAttributeWithMax* AttrValue = reinterpret_cast<FAttributeWithMax*>(PropValuePtr);

                if (AttrValue)
                {
                    // Print to Output Log
                    UE_LOG(LogTemp, Warning, TEXT("%s - Current: %.2f, Max: %.2f"),
                        *Property->GetName(),
                        AttrValue->Current.GetCurrentValue(),
                        AttrValue->Max.GetCurrentValue()
                    );

                    // Also print on screen (optional, shows in game)
                    if (GEngine)
                    {
                        GEngine->AddOnScreenDebugMessage(
                            -1, // Unique key, -1 = new message each time
                            5.f, // Duration in seconds
                            FColor::Yellow, // Text color
                            FString::Printf(TEXT("%s: %.2f / %.2f"),
                                *Property->GetName(),
                                AttrValue->Current.GetCurrentValue(),
                                AttrValue->Max.GetCurrentValue())
                        );
                    }
                }
            }
        }
    }
}