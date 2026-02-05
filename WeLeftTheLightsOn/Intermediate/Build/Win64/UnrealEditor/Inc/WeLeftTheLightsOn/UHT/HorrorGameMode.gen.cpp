// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHorrorGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AHorrorGameMode();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AHorrorGameMode_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHorrorGameMode **********************************************************
void AHorrorGameMode::StaticRegisterNativesAHorrorGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHorrorGameMode;
UClass* AHorrorGameMode::GetPrivateStaticClass()
{
	using TClass = AHorrorGameMode;
	if (!Z_Registration_Info_UClass_AHorrorGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HorrorGameMode"),
			Z_Registration_Info_UClass_AHorrorGameMode.InnerSingleton,
			StaticRegisterNativesAHorrorGameMode,
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
	return Z_Registration_Info_UClass_AHorrorGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AHorrorGameMode_NoRegister()
{
	return AHorrorGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHorrorGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person horror game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Variant_Horror/HorrorGameMode.h" },
		{ "ModuleRelativePath", "Variant_Horror/HorrorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person horror game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHorrorGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHorrorGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHorrorGameMode_Statics::ClassParams = {
	&AHorrorGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHorrorGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHorrorGameMode()
{
	if (!Z_Registration_Info_UClass_AHorrorGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHorrorGameMode.OuterSingleton, Z_Construct_UClass_AHorrorGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHorrorGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHorrorGameMode);
AHorrorGameMode::~AHorrorGameMode() {}
// ********** End Class AHorrorGameMode ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_HorrorGameMode_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHorrorGameMode, AHorrorGameMode::StaticClass, TEXT("AHorrorGameMode"), &Z_Registration_Info_UClass_AHorrorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHorrorGameMode), 952898783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_HorrorGameMode_h__Script_WeLeftTheLightsOn_1320768889(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_HorrorGameMode_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_HorrorGameMode_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
