// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterPlayerController();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UShooterBulletCounterUI_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AShooterPlayerController Function OnBulletCountUpdated *******************
struct Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated_Statics
{
	struct ShooterPlayerController_eventOnBulletCountUpdated_Parms
	{
		int32 MagazineSize;
		int32 Bullets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the bullet count on the possessed pawn is updated */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the bullet count on the possessed pawn is updated" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Bullets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated_Statics::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPlayerController_eventOnBulletCountUpdated_Parms, MagazineSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated_Statics::NewProp_Bullets = { "Bullets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPlayerController_eventOnBulletCountUpdated_Parms, Bullets), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated_Statics::NewProp_MagazineSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated_Statics::NewProp_Bullets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "OnBulletCountUpdated", Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated_Statics::ShooterPlayerController_eventOnBulletCountUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated_Statics::ShooterPlayerController_eventOnBulletCountUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterPlayerController::execOnBulletCountUpdated)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MagazineSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_Bullets);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBulletCountUpdated(Z_Param_MagazineSize,Z_Param_Bullets);
	P_NATIVE_END;
}
// ********** End Class AShooterPlayerController Function OnBulletCountUpdated *********************

// ********** Begin Class AShooterPlayerController Function OnPawnDamaged **************************
struct Z_Construct_UFunction_AShooterPlayerController_OnPawnDamaged_Statics
{
	struct ShooterPlayerController_eventOnPawnDamaged_Parms
	{
		float LifePercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the possessed pawn is damaged */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the possessed pawn is damaged" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifePercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterPlayerController_OnPawnDamaged_Statics::NewProp_LifePercent = { "LifePercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPlayerController_eventOnPawnDamaged_Parms, LifePercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPlayerController_OnPawnDamaged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerController_OnPawnDamaged_Statics::NewProp_LifePercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_OnPawnDamaged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_OnPawnDamaged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "OnPawnDamaged", Z_Construct_UFunction_AShooterPlayerController_OnPawnDamaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_OnPawnDamaged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterPlayerController_OnPawnDamaged_Statics::ShooterPlayerController_eventOnPawnDamaged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_OnPawnDamaged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterPlayerController_OnPawnDamaged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AShooterPlayerController_OnPawnDamaged_Statics::ShooterPlayerController_eventOnPawnDamaged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShooterPlayerController_OnPawnDamaged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_OnPawnDamaged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterPlayerController::execOnPawnDamaged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_LifePercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPawnDamaged(Z_Param_LifePercent);
	P_NATIVE_END;
}
// ********** End Class AShooterPlayerController Function OnPawnDamaged ****************************

// ********** Begin Class AShooterPlayerController Function OnPawnDestroyed ************************
struct Z_Construct_UFunction_AShooterPlayerController_OnPawnDestroyed_Statics
{
	struct ShooterPlayerController_eventOnPawnDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called if the possessed pawn is destroyed */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called if the possessed pawn is destroyed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterPlayerController_OnPawnDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPlayerController_eventOnPawnDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPlayerController_OnPawnDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerController_OnPawnDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_OnPawnDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_OnPawnDestroyed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "OnPawnDestroyed", Z_Construct_UFunction_AShooterPlayerController_OnPawnDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_OnPawnDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterPlayerController_OnPawnDestroyed_Statics::ShooterPlayerController_eventOnPawnDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_OnPawnDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterPlayerController_OnPawnDestroyed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AShooterPlayerController_OnPawnDestroyed_Statics::ShooterPlayerController_eventOnPawnDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShooterPlayerController_OnPawnDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_OnPawnDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterPlayerController::execOnPawnDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPawnDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// ********** End Class AShooterPlayerController Function OnPawnDestroyed **************************

// ********** Begin Class AShooterPlayerController *************************************************
void AShooterPlayerController::StaticRegisterNativesAShooterPlayerController()
{
	UClass* Class = AShooterPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBulletCountUpdated", &AShooterPlayerController::execOnBulletCountUpdated },
		{ "OnPawnDamaged", &AShooterPlayerController::execOnPawnDamaged },
		{ "OnPawnDestroyed", &AShooterPlayerController::execOnPawnDestroyed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AShooterPlayerController;
UClass* AShooterPlayerController::GetPrivateStaticClass()
{
	using TClass = AShooterPlayerController;
	if (!Z_Registration_Info_UClass_AShooterPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterPlayerController"),
			Z_Registration_Info_UClass_AShooterPlayerController.InnerSingleton,
			StaticRegisterNativesAShooterPlayerController,
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
	return Z_Registration_Info_UClass_AShooterPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister()
{
	return AShooterPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShooterPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple PlayerController for a first person shooter game\n *  Manages input mappings\n *  Respawns the player pawn when it's destroyed\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Variant_Shooter/ShooterPlayerController.h" },
		{ "ModuleRelativePath", "Variant_Shooter/ShooterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple PlayerController for a first person shooter game\nManages input mappings\nRespawns the player pawn when it's destroyed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input mapping contexts for this player */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input mapping contexts for this player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileExcludedMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidgetClass_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mobile controls widget to spawn */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mobile controls widget to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[] = {
		{ "Category", "Shooter|Respawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Character class to respawn when the possessed pawn is destroyed */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character class to respawn when the possessed pawn is destroyed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletCounterUIClass_MetaData[] = {
		{ "Category", "Shooter|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of bullet counter UI widget to spawn */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of bullet counter UI widget to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPawnTag_MetaData[] = {
		{ "Category", "Shooter|Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tag to grant the possessed pawn to flag it as the player */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag to grant the possessed pawn to flag it as the player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileExcludedMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileExcludedMappingContexts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MobileControlsWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletCounterUIClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerPawnTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterPlayerController_OnBulletCountUpdated, "OnBulletCountUpdated" }, // 3013543079
		{ &Z_Construct_UFunction_AShooterPlayerController_OnPawnDamaged, "OnPawnDamaged" }, // 995331286
		{ &Z_Construct_UFunction_AShooterPlayerController_OnPawnDestroyed, "OnPawnDestroyed" }, // 1346577072
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_MobileExcludedMappingContexts = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, MobileExcludedMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileExcludedMappingContexts_MetaData), NewProp_MobileExcludedMappingContexts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_MobileControlsWidgetClass = { "MobileControlsWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, MobileControlsWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidgetClass_MetaData), NewProp_MobileControlsWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, CharacterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AShooterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterClass_MetaData), NewProp_CharacterClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_BulletCounterUIClass = { "BulletCounterUIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, BulletCounterUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UShooterBulletCounterUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletCounterUIClass_MetaData), NewProp_BulletCounterUIClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_PlayerPawnTag = { "PlayerPawnTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, PlayerPawnTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPawnTag_MetaData), NewProp_PlayerPawnTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_MobileExcludedMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_MobileControlsWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_CharacterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_BulletCounterUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_PlayerPawnTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShooterPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterPlayerController_Statics::ClassParams = {
	&AShooterPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers),
	0,
	0x009003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterPlayerController()
{
	if (!Z_Registration_Info_UClass_AShooterPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterPlayerController.OuterSingleton, Z_Construct_UClass_AShooterPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterPlayerController.OuterSingleton;
}
AShooterPlayerController::AShooterPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPlayerController);
AShooterPlayerController::~AShooterPlayerController() {}
// ********** End Class AShooterPlayerController ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterPlayerController_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterPlayerController, AShooterPlayerController::StaticClass, TEXT("AShooterPlayerController"), &Z_Registration_Info_UClass_AShooterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterPlayerController), 1806183822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterPlayerController_h__Script_WeLeftTheLightsOn_503482394(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterPlayerController_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_ShooterPlayerController_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
