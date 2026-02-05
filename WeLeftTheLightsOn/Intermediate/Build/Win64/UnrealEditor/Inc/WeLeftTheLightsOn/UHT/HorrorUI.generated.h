// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Horror/UI/HorrorUI.h"

#ifdef WELEFTTHELIGHTSON_HorrorUI_generated_h
#error "HorrorUI.generated.h already included, missing '#pragma once' in HorrorUI.h"
#endif
#define WELEFTTHELIGHTSON_HorrorUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHorrorUI ****************************************************************
#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_UI_HorrorUI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSprintStateChanged); \
	DECLARE_FUNCTION(execOnSprintMeterUpdated);


#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_UI_HorrorUI_h_18_CALLBACK_WRAPPERS
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UHorrorUI_NoRegister();

#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_UI_HorrorUI_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorrorUI(); \
	friend struct Z_Construct_UClass_UHorrorUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UHorrorUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UHorrorUI, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeLeftTheLightsOn"), Z_Construct_UClass_UHorrorUI_NoRegister) \
	DECLARE_SERIALIZER(UHorrorUI)


#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_UI_HorrorUI_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorrorUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHorrorUI(UHorrorUI&&) = delete; \
	UHorrorUI(const UHorrorUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorrorUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorrorUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorrorUI) \
	NO_API virtual ~UHorrorUI();


#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_UI_HorrorUI_h_15_PROLOG
#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_UI_HorrorUI_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_UI_HorrorUI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_UI_HorrorUI_h_18_CALLBACK_WRAPPERS \
	FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_UI_HorrorUI_h_18_INCLASS_NO_PURE_DECLS \
	FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_UI_HorrorUI_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHorrorUI;

// ********** End Class UHorrorUI ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_UI_HorrorUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
