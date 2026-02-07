// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "FAttributeWithMax.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct WELEFTTHELIGHTSON_API FAttributeWithMax
{
public:
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadOnly, Category = "Attribute")
    FGameplayAttributeData Current;

    UPROPERTY(BlueprintReadOnly, Category = "Attribute")
    FGameplayAttributeData Max;

    /** Clamp Current to [0, Max] */
    void ClampCurrent();
};
