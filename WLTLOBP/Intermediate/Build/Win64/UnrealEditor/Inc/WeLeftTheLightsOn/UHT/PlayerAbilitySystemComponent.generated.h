// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerAbilitySystemComponent.h"

#ifdef WELEFTTHELIGHTSON_PlayerAbilitySystemComponent_generated_h
#error "PlayerAbilitySystemComponent.generated.h already included, missing '#pragma once' in PlayerAbilitySystemComponent.h"
#endif
#define WELEFTTHELIGHTSON_PlayerAbilitySystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPlayerAbilitySystemComponent ********************************************
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent_NoRegister();

#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_PlayerAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayerAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeLeftTheLightsOn"), Z_Construct_UClass_UPlayerAbilitySystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UPlayerAbilitySystemComponent)


#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_PlayerAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayerAbilitySystemComponent(UPlayerAbilitySystemComponent&&) = delete; \
	UPlayerAbilitySystemComponent(const UPlayerAbilitySystemComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAbilitySystemComponent) \
	NO_API virtual ~UPlayerAbilitySystemComponent();


#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_PlayerAbilitySystemComponent_h_12_PROLOG
#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_PlayerAbilitySystemComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_PlayerAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_PlayerAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayerAbilitySystemComponent;

// ********** End Class UPlayerAbilitySystemComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_PlayerAbilitySystemComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
