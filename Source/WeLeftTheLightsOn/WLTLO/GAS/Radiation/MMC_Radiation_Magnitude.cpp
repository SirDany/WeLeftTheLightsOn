#include "WLTLO/GAS/Radiation/MMC_Radiation_Magnitude.h"

float UMMC_Radiation_Magnitude::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const int32 stackCount = Spec.GetStackCount();
	const float radiationPct = FMath::Clamp(stackCount / 100.f, 0.f, 1.f);
	switch (RadiationTypeModifier)
	{
		case ERadiationTypeModifier::StaminaRegen:
		{
			//level 1 - radiation lowers stamin regen by 10%
			if (stackCount < 25)
			{
				return 1.f - (0.1f * radiationPct);
				//return -0.1f;
			}
		}
		case ERadiationTypeModifier::MaxStamina:
		{
			//level 2 - radiation decrease max stamina by 10%
			if (stackCount < 50)
			{
				return 1.f - (0.1f * radiationPct);
				//return -0.1f;
			}
		}			
		case ERadiationTypeModifier::MaxHealth:
		{
			//level 3 - radiation decreases max health by 20%
			if (stackCount < 75)
			{
				return 1.f - (0.2f * radiationPct);
				//return -0.2f;
			}
		}					
		default:
		{
			return 1.0f;
		}
			
	}
 }