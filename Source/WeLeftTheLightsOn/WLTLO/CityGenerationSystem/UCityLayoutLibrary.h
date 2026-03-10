// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UCityLayoutLibrary.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FCityPlot
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	FVector Center;

	UPROPERTY(BlueprintReadOnly)
	FVector Extents;
};

UCLASS()
class WELEFTTHELIGHTSON_API UUCityLayoutLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION(BlueprintCallable, Category = "CityGen")
		static void GenerateGridPlots(FVector Origin, FVector Size, float CellSize, TArray<FCityPlot>& OutPlots);
	
};
