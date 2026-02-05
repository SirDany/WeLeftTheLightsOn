// Fill out your copyright notice in the Description page of Project Settings.


#include "WLTLOFirstPersonCharacter.h"

// Sets default values
AWLTLOFirstPersonCharacter::AWLTLOFirstPersonCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//initialize the player ability system component
	PlayerASC = CreateDefaultSubobject<UPlayerAbilitySystemComponent>(TEXT("AbilitySystem"));

}

// Called when the game starts or when spawned
void AWLTLOFirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWLTLOFirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWLTLOFirstPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//Declare ability system component getter
/*UAbilitySystemComponent* AWLTLOFirstPersonCharacter::GetAbilitySystemComponent() const
{
	return PlayerASC.Get();
}*/

