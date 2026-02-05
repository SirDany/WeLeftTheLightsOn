// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHorrorCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AHorrorCharacter();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AHorrorCharacter_NoRegister();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AWeLeftTheLightsOnCharacter();
WELEFTTHELIGHTSON_API UFunction* Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature();
WELEFTTHELIGHTSON_API UFunction* Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FUpdateSprintMeterDelegate ********************************************
struct Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature_Statics
{
	struct _Script_WeLeftTheLightsOn_eventUpdateSprintMeterDelegate_Parms
	{
		float Percentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeLeftTheLightsOn_eventUpdateSprintMeterDelegate_Parms, Percentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature_Statics::NewProp_Percentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn, nullptr, "UpdateSprintMeterDelegate__DelegateSignature", Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature_Statics::_Script_WeLeftTheLightsOn_eventUpdateSprintMeterDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature_Statics::_Script_WeLeftTheLightsOn_eventUpdateSprintMeterDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUpdateSprintMeterDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateSprintMeterDelegate, float Percentage)
{
	struct _Script_WeLeftTheLightsOn_eventUpdateSprintMeterDelegate_Parms
	{
		float Percentage;
	};
	_Script_WeLeftTheLightsOn_eventUpdateSprintMeterDelegate_Parms Parms;
	Parms.Percentage=Percentage;
	UpdateSprintMeterDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FUpdateSprintMeterDelegate **********************************************

// ********** Begin Delegate FSprintStateChangedDelegate *******************************************
struct Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature_Statics
{
	struct _Script_WeLeftTheLightsOn_eventSprintStateChangedDelegate_Parms
	{
		bool bSprinting;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSprinting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature_Statics::NewProp_bSprinting_SetBit(void* Obj)
{
	((_Script_WeLeftTheLightsOn_eventSprintStateChangedDelegate_Parms*)Obj)->bSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature_Statics::NewProp_bSprinting = { "bSprinting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_WeLeftTheLightsOn_eventSprintStateChangedDelegate_Parms), &Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature_Statics::NewProp_bSprinting_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature_Statics::NewProp_bSprinting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn, nullptr, "SprintStateChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature_Statics::_Script_WeLeftTheLightsOn_eventSprintStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature_Statics::_Script_WeLeftTheLightsOn_eventSprintStateChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSprintStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SprintStateChangedDelegate, bool bSprinting)
{
	struct _Script_WeLeftTheLightsOn_eventSprintStateChangedDelegate_Parms
	{
		bool bSprinting;
	};
	_Script_WeLeftTheLightsOn_eventSprintStateChangedDelegate_Parms Parms;
	Parms.bSprinting=bSprinting ? true : false;
	SprintStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSprintStateChangedDelegate *********************************************

// ********** Begin Class AHorrorCharacter Function DoEndSprint ************************************
struct Z_Construct_UFunction_AHorrorCharacter_DoEndSprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stops sprinting behavior */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops sprinting behavior" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorrorCharacter_DoEndSprint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorrorCharacter, nullptr, "DoEndSprint", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorrorCharacter_DoEndSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorrorCharacter_DoEndSprint_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHorrorCharacter_DoEndSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorrorCharacter_DoEndSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorrorCharacter::execDoEndSprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoEndSprint();
	P_NATIVE_END;
}
// ********** End Class AHorrorCharacter Function DoEndSprint **************************************

// ********** Begin Class AHorrorCharacter Function DoStartSprint **********************************
struct Z_Construct_UFunction_AHorrorCharacter_DoStartSprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Starts sprinting behavior */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts sprinting behavior" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorrorCharacter_DoStartSprint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorrorCharacter, nullptr, "DoStartSprint", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorrorCharacter_DoStartSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorrorCharacter_DoStartSprint_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHorrorCharacter_DoStartSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorrorCharacter_DoStartSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorrorCharacter::execDoStartSprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoStartSprint();
	P_NATIVE_END;
}
// ********** End Class AHorrorCharacter Function DoStartSprint ************************************

// ********** Begin Class AHorrorCharacter *********************************************************
void AHorrorCharacter::StaticRegisterNativesAHorrorCharacter()
{
	UClass* Class = AHorrorCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoEndSprint", &AHorrorCharacter::execDoEndSprint },
		{ "DoStartSprint", &AHorrorCharacter::execDoStartSprint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHorrorCharacter;
UClass* AHorrorCharacter::GetPrivateStaticClass()
{
	using TClass = AHorrorCharacter;
	if (!Z_Registration_Info_UClass_AHorrorCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HorrorCharacter"),
			Z_Registration_Info_UClass_AHorrorCharacter.InnerSingleton,
			StaticRegisterNativesAHorrorCharacter,
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
	return Z_Registration_Info_UClass_AHorrorCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AHorrorCharacter_NoRegister()
{
	return AHorrorCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHorrorCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple first person horror character\n *  Provides stamina-based sprinting\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Variant_Horror/HorrorCharacter.h" },
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple first person horror character\nProvides stamina-based sprinting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpotLight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Player light source */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player light source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fire weapon input action */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire weapon input action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Walk" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default walk speed when not sprinting or recovering */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default walk speed when not sprinting or recovering" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintFixedTickTime_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time interval for sprinting stamina ticks */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time interval for sprinting stamina ticks" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintTime_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How long we can sprint for, in seconds */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long we can sprint for, in seconds" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Walk speed while sprinting */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Walk speed while sprinting" },
#endif
		{ "Units", "cm/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoveringWalkSpeed_MetaData[] = {
		{ "Category", "Recovery" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Walk speed while recovering stamina */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Walk speed while recovering stamina" },
#endif
		{ "Units", "cm/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoveryTime_MetaData[] = {
		{ "Category", "Recovery" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time it takes for the sprint meter to recover */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time it takes for the sprint meter to recover" },
#endif
		{ "Units", "s" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpotLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintFixedTickTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoveringWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoveryTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHorrorCharacter_DoEndSprint, "DoEndSprint" }, // 476218815
		{ &Z_Construct_UFunction_AHorrorCharacter_DoStartSprint, "DoStartSprint" }, // 1770798080
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHorrorCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SpotLight = { "SpotLight", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorCharacter, SpotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpotLight_MetaData), NewProp_SpotLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SprintFixedTickTime = { "SprintFixedTickTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorCharacter, SprintFixedTickTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintFixedTickTime_MetaData), NewProp_SprintFixedTickTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SprintTime = { "SprintTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorCharacter, SprintTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintTime_MetaData), NewProp_SprintTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorCharacter, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_RecoveringWalkSpeed = { "RecoveringWalkSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorCharacter, RecoveringWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoveringWalkSpeed_MetaData), NewProp_RecoveringWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_RecoveryTime = { "RecoveryTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorCharacter, RecoveryTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoveryTime_MetaData), NewProp_RecoveryTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHorrorCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SpotLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SprintAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SprintFixedTickTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SprintTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_RecoveringWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_RecoveryTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHorrorCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeLeftTheLightsOnCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHorrorCharacter_Statics::ClassParams = {
	&AHorrorCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHorrorCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorCharacter_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AHorrorCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHorrorCharacter()
{
	if (!Z_Registration_Info_UClass_AHorrorCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHorrorCharacter.OuterSingleton, Z_Construct_UClass_AHorrorCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHorrorCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHorrorCharacter);
AHorrorCharacter::~AHorrorCharacter() {}
// ********** End Class AHorrorCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_HorrorCharacter_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHorrorCharacter, AHorrorCharacter::StaticClass, TEXT("AHorrorCharacter"), &Z_Registration_Info_UClass_AHorrorCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHorrorCharacter), 2883707319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_HorrorCharacter_h__Script_WeLeftTheLightsOn_1828477570(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_HorrorCharacter_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Horror_HorrorCharacter_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
