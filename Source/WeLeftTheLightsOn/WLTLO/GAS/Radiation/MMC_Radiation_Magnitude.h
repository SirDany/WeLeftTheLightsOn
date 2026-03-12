// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_Radiation_Magnitude.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class ERadiationTypeModifier : uint8
{
	StaminaRegen,
	MaxStamina,
	MaxHealth
};

UCLASS()
class WELEFTTHELIGHTSON_API UMMC_Radiation_Magnitude : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Radiation")
	ERadiationTypeModifier RadiationTypeModifier;

	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;
};
