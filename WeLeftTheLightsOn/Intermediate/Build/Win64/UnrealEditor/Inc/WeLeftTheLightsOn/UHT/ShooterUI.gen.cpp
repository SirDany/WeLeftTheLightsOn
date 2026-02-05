// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterUI() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UShooterUI();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UShooterUI_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UShooterUI Function BP_UpdateScore ***************************************
struct ShooterUI_eventBP_UpdateScore_Parms
{
	uint8 TeamByte;
	int32 Score;
};
static FName NAME_UShooterUI_BP_UpdateScore = FName(TEXT("BP_UpdateScore"));
void UShooterUI::BP_UpdateScore(uint8 TeamByte, int32 Score)
{
	ShooterUI_eventBP_UpdateScore_Parms Parms;
	Parms.TeamByte=TeamByte;
	Parms.Score=Score;
	UFunction* Func = FindFunctionChecked(NAME_UShooterUI_BP_UpdateScore);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UShooterUI_BP_UpdateScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shooter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allows Blueprint to update score sub-widgets */" },
#endif
		{ "DisplayName", "Update Score" },
		{ "ModuleRelativePath", "Variant_Shooter/UI/ShooterUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows Blueprint to update score sub-widgets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeamByte;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UShooterUI_BP_UpdateScore_Statics::NewProp_TeamByte = { "TeamByte", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterUI_eventBP_UpdateScore_Parms, TeamByte), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShooterUI_BP_UpdateScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterUI_eventBP_UpdateScore_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterUI_BP_UpdateScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterUI_BP_UpdateScore_Statics::NewProp_TeamByte,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterUI_BP_UpdateScore_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterUI_BP_UpdateScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterUI_BP_UpdateScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterUI, nullptr, "BP_UpdateScore", Z_Construct_UFunction_UShooterUI_BP_UpdateScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterUI_BP_UpdateScore_Statics::PropPointers), sizeof(ShooterUI_eventBP_UpdateScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterUI_BP_UpdateScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterUI_BP_UpdateScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ShooterUI_eventBP_UpdateScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterUI_BP_UpdateScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterUI_BP_UpdateScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UShooterUI Function BP_UpdateScore *****************************************

// ********** Begin Class UShooterUI ***************************************************************
void UShooterUI::StaticRegisterNativesUShooterUI()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UShooterUI;
UClass* UShooterUI::GetPrivateStaticClass()
{
	using TClass = UShooterUI;
	if (!Z_Registration_Info_UClass_UShooterUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterUI"),
			Z_Registration_Info_UClass_UShooterUI.InnerSingleton,
			StaticRegisterNativesUShooterUI,
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
	return Z_Registration_Info_UClass_UShooterUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UShooterUI_NoRegister()
{
	return UShooterUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UShooterUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple scoreboard UI for a first person shooter game\n */" },
#endif
		{ "IncludePath", "Variant_Shooter/UI/ShooterUI.h" },
		{ "ModuleRelativePath", "Variant_Shooter/UI/ShooterUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple scoreboard UI for a first person shooter game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UShooterUI_BP_UpdateScore, "BP_UpdateScore" }, // 1456109203
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UShooterUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterUI_Statics::ClassParams = {
	&UShooterUI::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UShooterUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShooterUI()
{
	if (!Z_Registration_Info_UClass_UShooterUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooterUI.OuterSingleton, Z_Construct_UClass_UShooterUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShooterUI.OuterSingleton;
}
UShooterUI::UShooterUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterUI);
UShooterUI::~UShooterUI() {}
// ********** End Class UShooterUI *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_UI_ShooterUI_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShooterUI, UShooterUI::StaticClass, TEXT("UShooterUI"), &Z_Registration_Info_UClass_UShooterUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterUI), 2340987009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_UI_ShooterUI_h__Script_WeLeftTheLightsOn_4229117121(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_UI_ShooterUI_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_UI_ShooterUI_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
