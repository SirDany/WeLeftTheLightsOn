// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UCityThemeData.generated.h"

USTRUCT(BlueprintType)
struct FCityMeshSet
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TArray<TSoftObjectPtr<UStaticMesh>> Meshes;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float cityWieght = 1.0f;
};

UCLASS()
class WELEFTTHELIGHTSON_API UCityThemeData : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    //WELEFTTHELIGHTSON_API UCityThemeData();

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FCityMeshSet Buildings;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FCityMeshSet Roads;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FCityMeshSet Props;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float BuildingDensity = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float DamageLevel = 0.0f;

};


