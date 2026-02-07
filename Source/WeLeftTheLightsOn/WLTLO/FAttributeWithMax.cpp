// Fill out your copyright notice in the Description page of Project Settings.


#include "WLTLO/FAttributeWithMax.h"

void FAttributeWithMax::ClampCurrent()
{
    const float ClampedValue = FMath::Clamp(
        Current.GetCurrentValue(),
        0.f,
        Max.GetCurrentValue()
    );

    Current.SetCurrentValue(ClampedValue);
}
