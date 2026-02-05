// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeLeftTheLightsOnCharacter.h"

#ifdef WELEFTTHELIGHTSON_WeLeftTheLightsOnCharacter_generated_h
#error "WeLeftTheLightsOnCharacter.generated.h already included, missing '#pragma once' in WeLeftTheLightsOnCharacter.h"
#endif
#define WELEFTTHELIGHTSON_WeLeftTheLightsOnCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AWeLeftTheLightsOnCharacter **********************************************
#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AWeLeftTheLightsOnCharacter_NoRegister();

#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeLeftTheLightsOnCharacter(); \
	friend struct Z_Construct_UClass_AWeLeftTheLightsOnCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AWeLeftTheLightsOnCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AWeLeftTheLightsOnCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeLeftTheLightsOn"), Z_Construct_UClass_AWeLeftTheLightsOnCharacter_NoRegister) \
	DECLARE_SERIALIZER(AWeLeftTheLightsOnCharacter)


#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWeLeftTheLightsOnCharacter(AWeLeftTheLightsOnCharacter&&) = delete; \
	AWeLeftTheLightsOnCharacter(const AWeLeftTheLightsOnCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeLeftTheLightsOnCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeLeftTheLightsOnCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AWeLeftTheLightsOnCharacter) \
	NO_API virtual ~AWeLeftTheLightsOnCharacter();


#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnCharacter_h_21_PROLOG
#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWeLeftTheLightsOnCharacter;

// ********** End Class AWeLeftTheLightsOnCharacter ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
