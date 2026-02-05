// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeLeftTheLightsOnPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeLeftTheLightsOnPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AWeLeftTheLightsOnPlayerController();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWeLeftTheLightsOnPlayerController ***************************************
void AWeLeftTheLightsOnPlayerController::StaticRegisterNativesAWeLeftTheLightsOnPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWeLeftTheLightsOnPlayerController;
UClass* AWeLeftTheLightsOnPlayerController::GetPrivateStaticClass()
{
	using TClass = AWeLeftTheLightsOnPlayerController;
	if (!Z_Registration_Info_UClass_AWeLeftTheLightsOnPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeLeftTheLightsOnPlayerController"),
			Z_Registration_Info_UClass_AWeLeftTheLightsOnPlayerController.InnerSingleton,
			StaticRegisterNativesAWeLeftTheLightsOnPlayerController,
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
	return Z_Registration_Info_UClass_AWeLeftTheLightsOnPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_NoRegister()
{
	return AWeLeftTheLightsOnPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple first person Player Controller\n *  Manages the input mapping context.\n *  Overrides the Player Camera Manager class.\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "WeLeftTheLightsOnPlayerController.h" },
		{ "ModuleRelativePath", "WeLeftTheLightsOnPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple first person Player Controller\nManages the input mapping context.\nOverrides the Player Camera Manager class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "WeLeftTheLightsOnPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileExcludedMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "WeLeftTheLightsOnPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidgetClass_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mobile controls widget to spawn */" },
#endif
		{ "ModuleRelativePath", "WeLeftTheLightsOnPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mobile controls widget to spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileExcludedMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileExcludedMappingContexts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MobileControlsWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeLeftTheLightsOnPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeLeftTheLightsOnPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::NewProp_MobileExcludedMappingContexts = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeLeftTheLightsOnPlayerController, MobileExcludedMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileExcludedMappingContexts_MetaData), NewProp_MobileExcludedMappingContexts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::NewProp_MobileControlsWidgetClass = { "MobileControlsWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeLeftTheLightsOnPlayerController, MobileControlsWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidgetClass_MetaData), NewProp_MobileControlsWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::NewProp_MobileExcludedMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::NewProp_MobileControlsWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::ClassParams = {
	&AWeLeftTheLightsOnPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::PropPointers),
	0,
	0x009003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeLeftTheLightsOnPlayerController()
{
	if (!Z_Registration_Info_UClass_AWeLeftTheLightsOnPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeLeftTheLightsOnPlayerController.OuterSingleton, Z_Construct_UClass_AWeLeftTheLightsOnPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeLeftTheLightsOnPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeLeftTheLightsOnPlayerController);
AWeLeftTheLightsOnPlayerController::~AWeLeftTheLightsOnPlayerController() {}
// ********** End Class AWeLeftTheLightsOnPlayerController *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnPlayerController_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeLeftTheLightsOnPlayerController, AWeLeftTheLightsOnPlayerController::StaticClass, TEXT("AWeLeftTheLightsOnPlayerController"), &Z_Registration_Info_UClass_AWeLeftTheLightsOnPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeLeftTheLightsOnPlayerController), 418756046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnPlayerController_h__Script_WeLeftTheLightsOn_2247233918(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnPlayerController_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WeLeftTheLightsOnPlayerController_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
