// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterWeaponHolder.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterWeaponHolder() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UShooterWeaponHolder();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UShooterWeaponHolder_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UShooterWeaponHolder *************************************************
void UShooterWeaponHolder::StaticRegisterNativesUShooterWeaponHolder()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UShooterWeaponHolder;
UClass* UShooterWeaponHolder::GetPrivateStaticClass()
{
	using TClass = UShooterWeaponHolder;
	if (!Z_Registration_Info_UClass_UShooterWeaponHolder.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterWeaponHolder"),
			Z_Registration_Info_UClass_UShooterWeaponHolder.InnerSingleton,
			StaticRegisterNativesUShooterWeaponHolder,
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
	return Z_Registration_Info_UClass_UShooterWeaponHolder.InnerSingleton;
}
UClass* Z_Construct_UClass_UShooterWeaponHolder_NoRegister()
{
	return UShooterWeaponHolder::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UShooterWeaponHolder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterWeaponHolder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IShooterWeaponHolder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UShooterWeaponHolder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterWeaponHolder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterWeaponHolder_Statics::ClassParams = {
	&UShooterWeaponHolder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterWeaponHolder_Statics::Class_MetaDataParams), Z_Construct_UClass_UShooterWeaponHolder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShooterWeaponHolder()
{
	if (!Z_Registration_Info_UClass_UShooterWeaponHolder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooterWeaponHolder.OuterSingleton, Z_Construct_UClass_UShooterWeaponHolder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShooterWeaponHolder.OuterSingleton;
}
UShooterWeaponHolder::UShooterWeaponHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterWeaponHolder);
// ********** End Interface UShooterWeaponHolder ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_Weapons_ShooterWeaponHolder_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShooterWeaponHolder, UShooterWeaponHolder::StaticClass, TEXT("UShooterWeaponHolder"), &Z_Registration_Info_UClass_UShooterWeaponHolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterWeaponHolder), 759578300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_Weapons_ShooterWeaponHolder_h__Script_WeLeftTheLightsOn_3595997806(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_Weapons_ShooterWeaponHolder_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_Weapons_ShooterWeaponHolder_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
