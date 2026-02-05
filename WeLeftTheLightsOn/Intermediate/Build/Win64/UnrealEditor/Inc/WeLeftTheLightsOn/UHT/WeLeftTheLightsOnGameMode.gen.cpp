// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeLeftTheLightsOnGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeLeftTheLightsOnGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AWeLeftTheLightsOnGameMode();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AWeLeftTheLightsOnGameMode_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWeLeftTheLightsOnGameMode ***********************************************
void AWeLeftTheLightsOnGameMode::StaticRegisterNativesAWeLeftTheLightsOnGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWeLeftTheLightsOnGameMode;
UClass* AWeLeftTheLightsOnGameMode::GetPrivateStaticClass()
{
	using TClass = AWeLeftTheLightsOnGameMode;
	if (!Z_Registration_Info_UClass_AWeLeftTheLightsOnGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeLeftTheLightsOnGameMode"),
			Z_Registration_Info_UClass_AWeLeftTheLightsOnGameMode.InnerSingleton,
			StaticRegisterNativesAWeLeftTheLightsOnGameMode,
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
	return Z_Registration_Info_UClass_AWeLeftTheLightsOnGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AWeLeftTheLightsOnGameMode_NoRegister()
{
	return AWeLeftTheLightsOnGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWeLeftTheLightsOnGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WeLeftTheLightsOnGameMode.h" },
		{ "ModuleRelativePath", "WeLeftTheLightsOnGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeLeftTheLightsOnGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWeLeftTheLightsOnGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeLeftTheLightsOnGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeLeftTheLightsOnGameMode_Statics::ClassParams = {
	&AWeLeftTheLightsOnGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeLeftTheLightsOnGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeLeftTheLightsOnGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeLeftTheLightsOnGameMode()
{
	if (!Z_Registration_Info_UClass_AWeLeftTheLightsOnGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeLeftTheLightsOnGameMode.OuterSingleton, Z_Construct_UClass_AWeLeftTheLightsOnGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeLeftTheLightsOnGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeLeftTheLightsOnGameMode);
AWeLeftTheLightsOnGameMode::~AWeLeftTheLightsOnGameMode() {}
// ********** End Class AWeLeftTheLightsOnGameMode *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnGameMode_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeLeftTheLightsOnGameMode, AWeLeftTheLightsOnGameMode::StaticClass, TEXT("AWeLeftTheLightsOnGameMode"), &Z_Registration_Info_UClass_AWeLeftTheLightsOnGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeLeftTheLightsOnGameMode), 2505879144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnGameMode_h__Script_WeLeftTheLightsOn_3092556104(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnGameMode_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnGameMode_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
