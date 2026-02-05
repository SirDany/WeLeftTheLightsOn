// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterWithAttributesBase.h"
#include "AbilitySystemComponent.h"
#include "PlayerVitalsAttributeSet.h"

// Sets default values
ACharacterWithAttributesBase::ACharacterWithAttributesBase()
{
	PrimaryActorTick.bCanEverTick = true;

	// Create Ability System Component
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(
		TEXT("AbilitySystemComponent")
	);

	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	// Create Attribute Set
	PlayerVitalsAttributeSet = CreateDefaultSubobject<UPlayerVitalsAttributeSet>(
		TEXT("PlayerVitalsAttributeSet")
	);
}


// Called when the game starts or when spawned
void ACharacterWithAttributesBase::BeginPlay()
{
	Super::BeginPlay();
	
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
	}
}

// Called every frame
void ACharacterWithAttributesBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterWithAttributesBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UAbilitySystemComponent* ACharacterWithAttributesBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UPROPERTY()
TObjectPtr<UPlayerVitalsAttributeSet> VitalsAttributeSet;

