// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterWeapon.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterWeapon() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterProjectile_NoRegister();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterWeapon();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterWeapon_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AShooterWeapon Function GetFirstPersonMesh *******************************
struct Z_Construct_UFunction_AShooterWeapon_GetFirstPersonMesh_Statics
{
	struct ShooterWeapon_eventGetFirstPersonMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the first person mesh */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the first person mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterWeapon_GetFirstPersonMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterWeapon_eventGetFirstPersonMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterWeapon_GetFirstPersonMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterWeapon_GetFirstPersonMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_GetFirstPersonMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_GetFirstPersonMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterWeapon, nullptr, "GetFirstPersonMesh", Z_Construct_UFunction_AShooterWeapon_GetFirstPersonMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_GetFirstPersonMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterWeapon_GetFirstPersonMesh_Statics::ShooterWeapon_eventGetFirstPersonMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_GetFirstPersonMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterWeapon_GetFirstPersonMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AShooterWeapon_GetFirstPersonMesh_Statics::ShooterWeapon_eventGetFirstPersonMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShooterWeapon_GetFirstPersonMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterWeapon_GetFirstPersonMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterWeapon::execGetFirstPersonMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetFirstPersonMesh();
	P_NATIVE_END;
}
// ********** End Class AShooterWeapon Function GetFirstPersonMesh *********************************

// ********** Begin Class AShooterWeapon Function GetThirdPersonMesh *******************************
struct Z_Construct_UFunction_AShooterWeapon_GetThirdPersonMesh_Statics
{
	struct ShooterWeapon_eventGetThirdPersonMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the third person mesh */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the third person mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterWeapon_GetThirdPersonMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterWeapon_eventGetThirdPersonMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterWeapon_GetThirdPersonMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterWeapon_GetThirdPersonMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_GetThirdPersonMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_GetThirdPersonMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterWeapon, nullptr, "GetThirdPersonMesh", Z_Construct_UFunction_AShooterWeapon_GetThirdPersonMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_GetThirdPersonMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterWeapon_GetThirdPersonMesh_Statics::ShooterWeapon_eventGetThirdPersonMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_GetThirdPersonMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterWeapon_GetThirdPersonMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AShooterWeapon_GetThirdPersonMesh_Statics::ShooterWeapon_eventGetThirdPersonMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShooterWeapon_GetThirdPersonMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterWeapon_GetThirdPersonMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterWeapon::execGetThirdPersonMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetThirdPersonMesh();
	P_NATIVE_END;
}
// ********** End Class AShooterWeapon Function GetThirdPersonMesh *********************************

// ********** Begin Class AShooterWeapon Function OnOwnerDestroyed *********************************
struct Z_Construct_UFunction_AShooterWeapon_OnOwnerDestroyed_Statics
{
	struct ShooterWeapon_eventOnOwnerDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the weapon's owner is destroyed */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the weapon's owner is destroyed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterWeapon_OnOwnerDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterWeapon_eventOnOwnerDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterWeapon_OnOwnerDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterWeapon_OnOwnerDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_OnOwnerDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_OnOwnerDestroyed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterWeapon, nullptr, "OnOwnerDestroyed", Z_Construct_UFunction_AShooterWeapon_OnOwnerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_OnOwnerDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterWeapon_OnOwnerDestroyed_Statics::ShooterWeapon_eventOnOwnerDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_OnOwnerDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterWeapon_OnOwnerDestroyed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AShooterWeapon_OnOwnerDestroyed_Statics::ShooterWeapon_eventOnOwnerDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShooterWeapon_OnOwnerDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterWeapon_OnOwnerDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterWeapon::execOnOwnerDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOwnerDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// ********** End Class AShooterWeapon Function OnOwnerDestroyed ***********************************

// ********** Begin Class AShooterWeapon ***********************************************************
void AShooterWeapon::StaticRegisterNativesAShooterWeapon()
{
	UClass* Class = AShooterWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFirstPersonMesh", &AShooterWeapon::execGetFirstPersonMesh },
		{ "GetThirdPersonMesh", &AShooterWeapon::execGetThirdPersonMesh },
		{ "OnOwnerDestroyed", &AShooterWeapon::execOnOwnerDestroyed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AShooterWeapon;
UClass* AShooterWeapon::GetPrivateStaticClass()
{
	using TClass = AShooterWeapon;
	if (!Z_Registration_Info_UClass_AShooterWeapon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterWeapon"),
			Z_Registration_Info_UClass_AShooterWeapon.InnerSingleton,
			StaticRegisterNativesAShooterWeapon,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AShooterWeapon.InnerSingleton;
}
UClass* Z_Construct_UClass_AShooterWeapon_NoRegister()
{
	return AShooterWeapon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShooterWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base class for a simple first person shooter weapon\n *  Provides both first person and third person perspective meshes\n *  Handles ammo and firing logic\n *  Interacts with the weapon owner through the ShooterWeaponHolder interface\n */" },
#endif
		{ "IncludePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for a simple first person shooter weapon\nProvides both first person and third person perspective meshes\nHandles ammo and firing logic\nInteracts with the weapon owner through the ShooterWeaponHolder interface" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person perspective mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person perspective mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Third person perspective mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Third person perspective mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of projectiles this weapon will shoot */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of projectiles this weapon will shoot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagazineSize_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of bullets in a magazine */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of bullets in a magazine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FiringMontage_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Animation montage to play when firing this weapon */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation montage to play when firing this weapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonAnimInstanceClass_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AnimInstance class to set for the first person character mesh when this weapon is active */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AnimInstance class to set for the first person character mesh when this weapon is active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonAnimInstanceClass_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AnimInstance class to set for the third person character mesh when this weapon is active */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AnimInstance class to set for the third person character mesh when this weapon is active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimVariance_MetaData[] = {
		{ "Category", "Aim" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cone half-angle for variance while aiming */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cone half-angle for variance while aiming" },
#endif
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FiringRecoil_MetaData[] = {
		{ "Category", "Aim" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of firing recoil to apply to the owner */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of firing recoil to apply to the owner" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocketName_MetaData[] = {
		{ "Category", "Aim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the first person muzzle socket where projectiles will spawn */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the first person muzzle socket where projectiles will spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Aim" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance ahead of the muzzle that bullets will spawn at */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance ahead of the muzzle that bullets will spawn at" },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFullAuto_MetaData[] = {
		{ "Category", "Refire" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this weapon will automatically fire at the refire rate */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this weapon will automatically fire at the refire rate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefireRate_MetaData[] = {
		{ "Category", "Refire" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time between shots for this weapon. Affects both full auto and semi auto modes */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time between shots for this weapon. Affects both full auto and semi auto modes" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotLoudness_MetaData[] = {
		{ "Category", "Perception" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Loudness of the shot for AI perception system interactions */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loudness of the shot for AI perception system interactions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotNoiseRange_MetaData[] = {
		{ "Category", "Perception" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max range of shot AI perception noise */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max range of shot AI perception noise" },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotNoiseTag_MetaData[] = {
		{ "Category", "Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tag to apply to noise generated by shooting this weapon */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag to apply to noise generated by shooting this weapon" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FiringMontage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FirstPersonAnimInstanceClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ThirdPersonAnimInstanceClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimVariance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FiringRecoil;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MuzzleSocketName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MuzzleOffset;
	static void NewProp_bFullAuto_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullAuto;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefireRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotLoudness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotNoiseRange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ShotNoiseTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterWeapon_GetFirstPersonMesh, "GetFirstPersonMesh" }, // 1873604062
		{ &Z_Construct_UFunction_AShooterWeapon_GetThirdPersonMesh, "GetThirdPersonMesh" }, // 1003614134
		{ &Z_Construct_UFunction_AShooterWeapon_OnOwnerDestroyed, "OnOwnerDestroyed" }, // 3687695810
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FirstPersonMesh = { "FirstPersonMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterWeapon, FirstPersonMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonMesh_MetaData), NewProp_FirstPersonMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ThirdPersonMesh = { "ThirdPersonMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterWeapon, ThirdPersonMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonMesh_MetaData), NewProp_ThirdPersonMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterWeapon, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AShooterProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterWeapon, MagazineSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagazineSize_MetaData), NewProp_MagazineSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FiringMontage = { "FiringMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterWeapon, FiringMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiringMontage_MetaData), NewProp_FiringMontage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FirstPersonAnimInstanceClass = { "FirstPersonAnimInstanceClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterWeapon, FirstPersonAnimInstanceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonAnimInstanceClass_MetaData), NewProp_FirstPersonAnimInstanceClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ThirdPersonAnimInstanceClass = { "ThirdPersonAnimInstanceClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterWeapon, ThirdPersonAnimInstanceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonAnimInstanceClass_MetaData), NewProp_ThirdPersonAnimInstanceClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_AimVariance = { "AimVariance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterWeapon, AimVariance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimVariance_MetaData), NewProp_AimVariance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FiringRecoil = { "FiringRecoil", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterWeapon, FiringRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiringRecoil_MetaData), NewProp_FiringRecoil_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzleSocketName = { "MuzzleSocketName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterWeapon, MuzzleSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleSocketName_MetaData), NewProp_MuzzleSocketName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterWeapon, MuzzleOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleOffset_MetaData), NewProp_MuzzleOffset_MetaData) };
void Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bFullAuto_SetBit(void* Obj)
{
	((AShooterWeapon*)Obj)->bFullAuto = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bFullAuto = { "bFullAuto", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShooterWeapon), &Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bFullAuto_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFullAuto_MetaData), NewProp_bFullAuto_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_RefireRate = { "RefireRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterWeapon, RefireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefireRate_MetaData), NewProp_RefireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ShotLoudness = { "ShotLoudness", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterWeapon, ShotLoudness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotLoudness_MetaData), NewProp_ShotLoudness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ShotNoiseRange = { "ShotNoiseRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterWeapon, ShotNoiseRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotNoiseRange_MetaData), NewProp_ShotNoiseRange_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ShotNoiseTag = { "ShotNoiseTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterWeapon, ShotNoiseTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotNoiseTag_MetaData), NewProp_ShotNoiseTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FirstPersonMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ThirdPersonMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MagazineSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FiringMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FirstPersonAnimInstanceClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ThirdPersonAnimInstanceClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_AimVariance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FiringRecoil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzleSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bFullAuto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_RefireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ShotLoudness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ShotNoiseRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ShotNoiseTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShooterWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterWeapon_Statics::ClassParams = {
	&AShooterWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AShooterWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterWeapon()
{
	if (!Z_Registration_Info_UClass_AShooterWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterWeapon.OuterSingleton, Z_Construct_UClass_AShooterWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterWeapon.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterWeapon);
AShooterWeapon::~AShooterWeapon() {}
// ********** End Class AShooterWeapon *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_Weapons_ShooterWeapon_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterWeapon, AShooterWeapon::StaticClass, TEXT("AShooterWeapon"), &Z_Registration_Info_UClass_AShooterWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterWeapon), 373553747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_Weapons_ShooterWeapon_h__Script_WeLeftTheLightsOn_2527792422(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_Weapons_ShooterWeapon_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_Weapons_ShooterWeapon_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
