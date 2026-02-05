// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AbilitySystemInterface.h"

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WLTLOFirstPersonCharacter.generated.h"

UCLASS(config=Game)
class WELEFTTHELIGHTSON_API AWLTLOFirstPersonCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWLTLOFirstPersonCharacter();

	//Adds abilities component to the player character
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Abilities)
	mutable TObjectPtr<class UPlayerAbilitySystemComponent> PlayerASC;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Declare ability system component getter
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

};
