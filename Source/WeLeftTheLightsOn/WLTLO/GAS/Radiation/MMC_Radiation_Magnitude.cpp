// Fill out your copyright notice in the Description page of Project Settings.

#include "WLTLO/GAS/Radiation/MMC_Radiation_Magnitude.h"

float UMMC_Radiation_Magnitude::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	int32 stackCount = Spec.GetStackCount();
	switch (RadiationTypeModifier)
	{
		case ERadiationTypeModifier::StaminaRegen:
		{
			//level 1 - radiation lowers stamin regen by 10%
			if (stackCount < 2)
			{
				return -0.1f;
			}
		}
		case ERadiationTypeModifier::MaxStamina:
		{
			//level 2 - radiation decrease max stamina by 10%
			if (stackCount < 3)
			{
				return -0.1f;
			}
		}			
		case ERadiationTypeModifier::MaxHealth:
		{
			//level 3 - radiation decreases max health by 20%
			if (stackCount < 4)
			{
				return -0.2f;
			}
		}					
		default:
		{
			return 0.0f;
		}
			
	}
 }