// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNPC.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterNPC() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterNPC();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterNPC_NoRegister();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterWeapon_NoRegister();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AWeLeftTheLightsOnCharacter();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UShooterWeaponHolder_NoRegister();
WELEFTTHELIGHTSON_API UFunction* Z_Construct_UDelegateFunction_WeLeftTheLightsOn_PawnDeathDelegate__DelegateSignature();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FPawnDeathDelegate ****************************************************
struct Z_Construct_UDelegateFunction_WeLeftTheLightsOn_PawnDeathDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeLeftTheLightsOn_PawnDeathDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn, nullptr, "PawnDeathDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeLeftTheLightsOn_PawnDeathDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeLeftTheLightsOn_PawnDeathDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_WeLeftTheLightsOn_PawnDeathDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeLeftTheLightsOn_PawnDeathDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPawnDeathDelegate_DelegateWrapper(const FMulticastScriptDelegate& PawnDeathDelegate)
{
	PawnDeathDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FPawnDeathDelegate ******************************************************

// ********** Begin Class AShooterNPC **************************************************************
void AShooterNPC::StaticRegisterNativesAShooterNPC()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AShooterNPC;
UClass* AShooterNPC::GetPrivateStaticClass()
{
	using TClass = AShooterNPC;
	if (!Z_Registration_Info_UClass_AShooterNPC.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterNPC"),
			Z_Registration_Info_UClass_AShooterNPC.InnerSingleton,
			StaticRegisterNativesAShooterNPC,
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
	return Z_Registration_Info_UClass_AShooterNPC.InnerSingleton;
}
UClass* Z_Construct_UClass_AShooterNPC_NoRegister()
{
	return AShooterNPC::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShooterNPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple AI-controlled shooter game NPC\n *  Executes its behavior through a StateTree managed by its AI Controller\n *  Holds and manages a weapon\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Variant_Shooter/AI/ShooterNPC.h" },
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple AI-controlled shooter game NPC\nExecutes its behavior through a StateTree managed by its AI Controller\nHolds and manages a weapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current HP for this character. It dies if it reaches zero through damage */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current HP for this character. It dies if it reaches zero through damage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollCollisionProfile_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the collision profile to use during ragdoll death */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the collision profile to use during ragdoll death" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeferredDestructionTime_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time to wait after death before destroying this actor */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time to wait after death before destroying this actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamByte_MetaData[] = {
		{ "Category", "Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Team byte for this character */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Team byte for this character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of weapon to spawn for this character */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of weapon to spawn for this character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonWeaponSocket_MetaData[] = {
		{ "Category", "Weapons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the first person mesh weapon socket */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the first person mesh weapon socket" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonWeaponSocket_MetaData[] = {
		{ "Category", "Weapons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the third person mesh weapon socket */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the third person mesh weapon socket" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimRange_MetaData[] = {
		{ "Category", "Aim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max range for aiming calculations */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max range for aiming calculations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimVarianceHalfAngle_MetaData[] = {
		{ "Category", "Aim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cone variance to apply while aiming */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cone variance to apply while aiming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAimOffsetZ_MetaData[] = {
		{ "Category", "Aim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum vertical offset from the target center to apply when aiming */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum vertical offset from the target center to apply when aiming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAimOffsetZ_MetaData[] = {
		{ "Category", "Aim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum vertical offset from the target center to apply when aiming */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum vertical offset from the target center to apply when aiming" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RagdollCollisionProfile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeferredDestructionTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeamByte;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FirstPersonWeaponSocket;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ThirdPersonWeaponSocket;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimVarianceHalfAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAimOffsetZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAimOffsetZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterNPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterNPC_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPC, CurrentHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHP_MetaData), NewProp_CurrentHP_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterNPC_Statics::NewProp_RagdollCollisionProfile = { "RagdollCollisionProfile", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPC, RagdollCollisionProfile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollCollisionProfile_MetaData), NewProp_RagdollCollisionProfile_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterNPC_Statics::NewProp_DeferredDestructionTime = { "DeferredDestructionTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPC, DeferredDestructionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeferredDestructionTime_MetaData), NewProp_DeferredDestructionTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AShooterNPC_Statics::NewProp_TeamByte = { "TeamByte", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPC, TeamByte), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamByte_MetaData), NewProp_TeamByte_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterNPC_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPC, WeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AShooterWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponClass_MetaData), NewProp_WeaponClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterNPC_Statics::NewProp_FirstPersonWeaponSocket = { "FirstPersonWeaponSocket", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPC, FirstPersonWeaponSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonWeaponSocket_MetaData), NewProp_FirstPersonWeaponSocket_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterNPC_Statics::NewProp_ThirdPersonWeaponSocket = { "ThirdPersonWeaponSocket", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPC, ThirdPersonWeaponSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonWeaponSocket_MetaData), NewProp_ThirdPersonWeaponSocket_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterNPC_Statics::NewProp_AimRange = { "AimRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPC, AimRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimRange_MetaData), NewProp_AimRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterNPC_Statics::NewProp_AimVarianceHalfAngle = { "AimVarianceHalfAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPC, AimVarianceHalfAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimVarianceHalfAngle_MetaData), NewProp_AimVarianceHalfAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterNPC_Statics::NewProp_MinAimOffsetZ = { "MinAimOffsetZ", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPC, MinAimOffsetZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAimOffsetZ_MetaData), NewProp_MinAimOffsetZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterNPC_Statics::NewProp_MaxAimOffsetZ = { "MaxAimOffsetZ", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPC, MaxAimOffsetZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAimOffsetZ_MetaData), NewProp_MaxAimOffsetZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPC_Statics::NewProp_CurrentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPC_Statics::NewProp_RagdollCollisionProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPC_Statics::NewProp_DeferredDestructionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPC_Statics::NewProp_TeamByte,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPC_Statics::NewProp_WeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPC_Statics::NewProp_FirstPersonWeaponSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPC_Statics::NewProp_ThirdPersonWeaponSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPC_Statics::NewProp_AimRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPC_Statics::NewProp_AimVarianceHalfAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPC_Statics::NewProp_MinAimOffsetZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPC_Statics::NewProp_MaxAimOffsetZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShooterNPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeLeftTheLightsOnCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AShooterNPC_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UShooterWeaponHolder_NoRegister, (int32)VTABLE_OFFSET(AShooterNPC, IShooterWeaponHolder), false },  // 759578300
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterNPC_Statics::ClassParams = {
	&AShooterNPC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShooterNPC_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNPC_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNPC_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterNPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterNPC()
{
	if (!Z_Registration_Info_UClass_AShooterNPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterNPC.OuterSingleton, Z_Construct_UClass_AShooterNPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterNPC.OuterSingleton;
}
AShooterNPC::AShooterNPC() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterNPC);
AShooterNPC::~AShooterNPC() {}
// ********** End Class AShooterNPC ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_ShooterNPC_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterNPC, AShooterNPC::StaticClass, TEXT("AShooterNPC"), &Z_Registration_Info_UClass_AShooterNPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterNPC), 1280012469U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_ShooterNPC_h__Script_WeLeftTheLightsOn_2442464481(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_ShooterNPC_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_ShooterNPC_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
