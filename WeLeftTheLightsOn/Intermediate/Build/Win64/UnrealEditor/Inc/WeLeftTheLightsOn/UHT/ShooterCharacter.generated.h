// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Shooter/ShooterCharacter.h"

#ifdef WELEFTTHELIGHTSON_ShooterCharacter_generated_h
#error "ShooterCharacter.generated.h already included, missing '#pragma once' in ShooterCharacter.h"
#endif
#define WELEFTTHELIGHTSON_ShooterCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FBulletCountUpdatedDelegate *******************************************
#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterCharacter_h_15_DELEGATE \
WELEFTTHELIGHTSON_API void FBulletCountUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& BulletCountUpdatedDelegate, int32 MagazineSize, int32 Bullets);


// ********** End Delegate FBulletCountUpdatedDelegate *********************************************

// ********** Begin Delegate FDamagedDelegate ******************************************************
#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterCharacter_h_16_DELEGATE \
WELEFTTHELIGHTSON_API void FDamagedDelegate_DelegateWrapper(const FMulticastScriptDelegate& DamagedDelegate, float LifePercent);


// ********** End Delegate FDamagedDelegate ********************************************************

// ********** Begin Class AShooterCharacter ********************************************************
#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoSwitchWeapon); \
	DECLARE_FUNCTION(execDoStopFiring); \
	DECLARE_FUNCTION(execDoStartFiring);


#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterCharacter_h_26_CALLBACK_WRAPPERS
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();

#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterCharacter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AShooterCharacter, AWeLeftTheLightsOnCharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeLeftTheLightsOn"), Z_Construct_UClass_AShooterCharacter_NoRegister) \
	DECLARE_SERIALIZER(AShooterCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AShooterCharacter*>(this); }


#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterCharacter_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShooterCharacter(AShooterCharacter&&) = delete; \
	AShooterCharacter(const AShooterCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AShooterCharacter) \
	NO_API virtual ~AShooterCharacter();


#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterCharacter_h_23_PROLOG
#define FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterCharacter_h_26_CALLBACK_WRAPPERS \
	FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterCharacter_h_26_INCLASS_NO_PURE_DECLS \
	FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShooterCharacter;

// ********** End Class AShooterCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
