// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "CharacterWithAttributesBase.generated.h"

class UWLTLO_AbilitySystemComponent;
class UPlayerVitalsAttributeSet;

UCLASS()
class WELEFTTHELIGHTSON_API ACharacterWithAttributesBase
	: public ACharacter
	, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ACharacterWithAttributesBase();

	// GAS requirement
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:
	virtual void BeginPlay() override;

	// Ability System Component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
	TObjectPtr<UWLTLO_AbilitySystemComponent> AbilitySystemComponent;

	// Attribute Set
	UPROPERTY()
	TObjectPtr<UPlayerVitalsAttributeSet> PlayerVitalsAttributeSet;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};