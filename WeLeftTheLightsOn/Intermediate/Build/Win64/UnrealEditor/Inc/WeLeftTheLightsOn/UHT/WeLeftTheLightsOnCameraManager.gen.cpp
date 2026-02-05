// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeLeftTheLightsOnCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeLeftTheLightsOnCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AWeLeftTheLightsOnCameraManager();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AWeLeftTheLightsOnCameraManager_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWeLeftTheLightsOnCameraManager ******************************************
void AWeLeftTheLightsOnCameraManager::StaticRegisterNativesAWeLeftTheLightsOnCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWeLeftTheLightsOnCameraManager;
UClass* AWeLeftTheLightsOnCameraManager::GetPrivateStaticClass()
{
	using TClass = AWeLeftTheLightsOnCameraManager;
	if (!Z_Registration_Info_UClass_AWeLeftTheLightsOnCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeLeftTheLightsOnCameraManager"),
			Z_Registration_Info_UClass_AWeLeftTheLightsOnCameraManager.InnerSingleton,
			StaticRegisterNativesAWeLeftTheLightsOnCameraManager,
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
	return Z_Registration_Info_UClass_AWeLeftTheLightsOnCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AWeLeftTheLightsOnCameraManager_NoRegister()
{
	return AWeLeftTheLightsOnCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWeLeftTheLightsOnCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "WeLeftTheLightsOnCameraManager.h" },
		{ "ModuleRelativePath", "WeLeftTheLightsOnCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeLeftTheLightsOnCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWeLeftTheLightsOnCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeLeftTheLightsOnCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeLeftTheLightsOnCameraManager_Statics::ClassParams = {
	&AWeLeftTheLightsOnCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeLeftTheLightsOnCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeLeftTheLightsOnCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeLeftTheLightsOnCameraManager()
{
	if (!Z_Registration_Info_UClass_AWeLeftTheLightsOnCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeLeftTheLightsOnCameraManager.OuterSingleton, Z_Construct_UClass_AWeLeftTheLightsOnCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeLeftTheLightsOnCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeLeftTheLightsOnCameraManager);
AWeLeftTheLightsOnCameraManager::~AWeLeftTheLightsOnCameraManager() {}
// ********** End Class AWeLeftTheLightsOnCameraManager ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnCameraManager_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeLeftTheLightsOnCameraManager, AWeLeftTheLightsOnCameraManager::StaticClass, TEXT("AWeLeftTheLightsOnCameraManager"), &Z_Registration_Info_UClass_AWeLeftTheLightsOnCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeLeftTheLightsOnCameraManager), 1922377704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnCameraManager_h__Script_WeLeftTheLightsOn_2450812027(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnCameraManager_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnCameraManager_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
