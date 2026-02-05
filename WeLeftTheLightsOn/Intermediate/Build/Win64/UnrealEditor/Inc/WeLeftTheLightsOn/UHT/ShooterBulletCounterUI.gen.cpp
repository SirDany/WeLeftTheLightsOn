// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterBulletCounterUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterBulletCounterUI() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UShooterBulletCounterUI();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UShooterBulletCounterUI_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UShooterBulletCounterUI Function BP_Damaged ******************************
struct ShooterBulletCounterUI_eventBP_Damaged_Parms
{
	float LifePercent;
};
static FName NAME_UShooterBulletCounterUI_BP_Damaged = FName(TEXT("BP_Damaged"));
void UShooterBulletCounterUI::BP_Damaged(float LifePercent)
{
	ShooterBulletCounterUI_eventBP_Damaged_Parms Parms;
	Parms.LifePercent=LifePercent;
	UFunction* Func = FindFunctionChecked(NAME_UShooterBulletCounterUI_BP_Damaged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UShooterBulletCounterUI_BP_Damaged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shooter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allows Blueprint to update sub-widgets with the new life total and play a damage effect on the HUD */" },
#endif
		{ "DisplayName", "Damaged" },
		{ "ModuleRelativePath", "Variant_Shooter/UI/ShooterBulletCounterUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows Blueprint to update sub-widgets with the new life total and play a damage effect on the HUD" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifePercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBulletCounterUI_BP_Damaged_Statics::NewProp_LifePercent = { "LifePercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBulletCounterUI_eventBP_Damaged_Parms, LifePercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBulletCounterUI_BP_Damaged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBulletCounterUI_BP_Damaged_Statics::NewProp_LifePercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBulletCounterUI_BP_Damaged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBulletCounterUI_BP_Damaged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBulletCounterUI, nullptr, "BP_Damaged", Z_Construct_UFunction_UShooterBulletCounterUI_BP_Damaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBulletCounterUI_BP_Damaged_Statics::PropPointers), sizeof(ShooterBulletCounterUI_eventBP_Damaged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBulletCounterUI_BP_Damaged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBulletCounterUI_BP_Damaged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ShooterBulletCounterUI_eventBP_Damaged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBulletCounterUI_BP_Damaged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBulletCounterUI_BP_Damaged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UShooterBulletCounterUI Function BP_Damaged ********************************

// ********** Begin Class UShooterBulletCounterUI Function BP_UpdateBulletCounter ******************
struct ShooterBulletCounterUI_eventBP_UpdateBulletCounter_Parms
{
	int32 MagazineSize;
	int32 BulletCount;
};
static FName NAME_UShooterBulletCounterUI_BP_UpdateBulletCounter = FName(TEXT("BP_UpdateBulletCounter"));
void UShooterBulletCounterUI::BP_UpdateBulletCounter(int32 MagazineSize, int32 BulletCount)
{
	ShooterBulletCounterUI_eventBP_UpdateBulletCounter_Parms Parms;
	Parms.MagazineSize=MagazineSize;
	Parms.BulletCount=BulletCount;
	UFunction* Func = FindFunctionChecked(NAME_UShooterBulletCounterUI_BP_UpdateBulletCounter);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UShooterBulletCounterUI_BP_UpdateBulletCounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shooter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allows Blueprint to update sub-widgets with the new bullet count */" },
#endif
		{ "DisplayName", "UpdateBulletCounter" },
		{ "ModuleRelativePath", "Variant_Shooter/UI/ShooterBulletCounterUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows Blueprint to update sub-widgets with the new bullet count" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BulletCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShooterBulletCounterUI_BP_UpdateBulletCounter_Statics::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBulletCounterUI_eventBP_UpdateBulletCounter_Parms, MagazineSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShooterBulletCounterUI_BP_UpdateBulletCounter_Statics::NewProp_BulletCount = { "BulletCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBulletCounterUI_eventBP_UpdateBulletCounter_Parms, BulletCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBulletCounterUI_BP_UpdateBulletCounter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBulletCounterUI_BP_UpdateBulletCounter_Statics::NewProp_MagazineSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBulletCounterUI_BP_UpdateBulletCounter_Statics::NewProp_BulletCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBulletCounterUI_BP_UpdateBulletCounter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBulletCounterUI_BP_UpdateBulletCounter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBulletCounterUI, nullptr, "BP_UpdateBulletCounter", Z_Construct_UFunction_UShooterBulletCounterUI_BP_UpdateBulletCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBulletCounterUI_BP_UpdateBulletCounter_Statics::PropPointers), sizeof(ShooterBulletCounterUI_eventBP_UpdateBulletCounter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBulletCounterUI_BP_UpdateBulletCounter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBulletCounterUI_BP_UpdateBulletCounter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ShooterBulletCounterUI_eventBP_UpdateBulletCounter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBulletCounterUI_BP_UpdateBulletCounter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBulletCounterUI_BP_UpdateBulletCounter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UShooterBulletCounterUI Function BP_UpdateBulletCounter ********************

// ********** Begin Class UShooterBulletCounterUI **************************************************
void UShooterBulletCounterUI::StaticRegisterNativesUShooterBulletCounterUI()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UShooterBulletCounterUI;
UClass* UShooterBulletCounterUI::GetPrivateStaticClass()
{
	using TClass = UShooterBulletCounterUI;
	if (!Z_Registration_Info_UClass_UShooterBulletCounterUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterBulletCounterUI"),
			Z_Registration_Info_UClass_UShooterBulletCounterUI.InnerSingleton,
			StaticRegisterNativesUShooterBulletCounterUI,
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
	return Z_Registration_Info_UClass_UShooterBulletCounterUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UShooterBulletCounterUI_NoRegister()
{
	return UShooterBulletCounterUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UShooterBulletCounterUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple bullet counter UI widget for a first person shooter game\n */" },
#endif
		{ "IncludePath", "Variant_Shooter/UI/ShooterBulletCounterUI.h" },
		{ "ModuleRelativePath", "Variant_Shooter/UI/ShooterBulletCounterUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple bullet counter UI widget for a first person shooter game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UShooterBulletCounterUI_BP_Damaged, "BP_Damaged" }, // 1544820139
		{ &Z_Construct_UFunction_UShooterBulletCounterUI_BP_UpdateBulletCounter, "BP_UpdateBulletCounter" }, // 3340564989
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterBulletCounterUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UShooterBulletCounterUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterBulletCounterUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterBulletCounterUI_Statics::ClassParams = {
	&UShooterBulletCounterUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterBulletCounterUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UShooterBulletCounterUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShooterBulletCounterUI()
{
	if (!Z_Registration_Info_UClass_UShooterBulletCounterUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooterBulletCounterUI.OuterSingleton, Z_Construct_UClass_UShooterBulletCounterUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShooterBulletCounterUI.OuterSingleton;
}
UShooterBulletCounterUI::UShooterBulletCounterUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterBulletCounterUI);
UShooterBulletCounterUI::~UShooterBulletCounterUI() {}
// ********** End Class UShooterBulletCounterUI ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_UI_ShooterBulletCounterUI_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShooterBulletCounterUI, UShooterBulletCounterUI::StaticClass, TEXT("UShooterBulletCounterUI"), &Z_Registration_Info_UClass_UShooterBulletCounterUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterBulletCounterUI), 3393913218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_UI_ShooterBulletCounterUI_h__Script_WeLeftTheLightsOn_1227435097(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_UI_ShooterBulletCounterUI_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_UI_ShooterBulletCounterUI_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
