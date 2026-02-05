// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterAIController.h"
#include "Perception/AIPerceptionTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeAIComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterAIController();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterAIController_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AShooterAIController Function OnPawnDeath ********************************
struct Z_Construct_UFunction_AShooterAIController_OnPawnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the possessed pawn dies */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the possessed pawn dies" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterAIController_OnPawnDeath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterAIController, nullptr, "OnPawnDeath", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterAIController_OnPawnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterAIController_OnPawnDeath_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AShooterAIController_OnPawnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterAIController_OnPawnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterAIController::execOnPawnDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPawnDeath();
	P_NATIVE_END;
}
// ********** End Class AShooterAIController Function OnPawnDeath **********************************

// ********** Begin Class AShooterAIController Function OnPerceptionForgotten **********************
struct Z_Construct_UFunction_AShooterAIController_OnPerceptionForgotten_Statics
{
	struct ShooterAIController_eventOnPerceptionForgotten_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the AI perception component forgets a given actor */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the AI perception component forgets a given actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterAIController_OnPerceptionForgotten_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterAIController_eventOnPerceptionForgotten_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterAIController_OnPerceptionForgotten_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterAIController_OnPerceptionForgotten_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterAIController_OnPerceptionForgotten_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterAIController_OnPerceptionForgotten_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterAIController, nullptr, "OnPerceptionForgotten", Z_Construct_UFunction_AShooterAIController_OnPerceptionForgotten_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterAIController_OnPerceptionForgotten_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterAIController_OnPerceptionForgotten_Statics::ShooterAIController_eventOnPerceptionForgotten_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterAIController_OnPerceptionForgotten_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterAIController_OnPerceptionForgotten_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AShooterAIController_OnPerceptionForgotten_Statics::ShooterAIController_eventOnPerceptionForgotten_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShooterAIController_OnPerceptionForgotten()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterAIController_OnPerceptionForgotten_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterAIController::execOnPerceptionForgotten)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPerceptionForgotten(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class AShooterAIController Function OnPerceptionForgotten ************************

// ********** Begin Class AShooterAIController Function OnPerceptionUpdated ************************
struct Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated_Statics
{
	struct ShooterAIController_eventOnPerceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the AI perception component updates a perception on a given actor */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the AI perception component updates a perception on a given actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterAIController_eventOnPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterAIController_eventOnPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 1267494880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterAIController, nullptr, "OnPerceptionUpdated", Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated_Statics::ShooterAIController_eventOnPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated_Statics::ShooterAIController_eventOnPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterAIController::execOnPerceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// ********** End Class AShooterAIController Function OnPerceptionUpdated **************************

// ********** Begin Class AShooterAIController *****************************************************
void AShooterAIController::StaticRegisterNativesAShooterAIController()
{
	UClass* Class = AShooterAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPawnDeath", &AShooterAIController::execOnPawnDeath },
		{ "OnPerceptionForgotten", &AShooterAIController::execOnPerceptionForgotten },
		{ "OnPerceptionUpdated", &AShooterAIController::execOnPerceptionUpdated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AShooterAIController;
UClass* AShooterAIController::GetPrivateStaticClass()
{
	using TClass = AShooterAIController;
	if (!Z_Registration_Info_UClass_AShooterAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterAIController"),
			Z_Registration_Info_UClass_AShooterAIController.InnerSingleton,
			StaticRegisterNativesAShooterAIController,
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
	return Z_Registration_Info_UClass_AShooterAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_AShooterAIController_NoRegister()
{
	return AShooterAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShooterAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple AI Controller for a first person shooter enemy\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Variant_Shooter/AI/ShooterAIController.h" },
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple AI Controller for a first person shooter enemy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTreeAI_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Runs the behavior StateTree for this NPC */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runs the behavior StateTree for this NPC" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerception_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Detects other actors through sight, hearing and other senses */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Detects other actors through sight, hearing and other senses" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamTag_MetaData[] = {
		{ "Category", "Shooter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Team tag for pawn friend or foe identification */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Team tag for pawn friend or foe identification" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateTreeAI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerception;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterAIController_OnPawnDeath, "OnPawnDeath" }, // 1180781285
		{ &Z_Construct_UFunction_AShooterAIController_OnPerceptionForgotten, "OnPerceptionForgotten" }, // 1176431388
		{ &Z_Construct_UFunction_AShooterAIController_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 1859455322
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterAIController_Statics::NewProp_StateTreeAI = { "StateTreeAI", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterAIController, StateTreeAI), Z_Construct_UClass_UStateTreeAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTreeAI_MetaData), NewProp_StateTreeAI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterAIController_Statics::NewProp_AIPerception = { "AIPerception", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterAIController, AIPerception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerception_MetaData), NewProp_AIPerception_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterAIController_Statics::NewProp_TeamTag = { "TeamTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterAIController, TeamTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamTag_MetaData), NewProp_TeamTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterAIController_Statics::NewProp_StateTreeAI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterAIController_Statics::NewProp_AIPerception,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterAIController_Statics::NewProp_TeamTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShooterAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterAIController_Statics::ClassParams = {
	&AShooterAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AShooterAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::PropPointers),
	0,
	0x009003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterAIController()
{
	if (!Z_Registration_Info_UClass_AShooterAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterAIController.OuterSingleton, Z_Construct_UClass_AShooterAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterAIController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterAIController);
AShooterAIController::~AShooterAIController() {}
// ********** End Class AShooterAIController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_ShooterAIController_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterAIController, AShooterAIController::StaticClass, TEXT("AShooterAIController"), &Z_Registration_Info_UClass_AShooterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterAIController), 3022378873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_ShooterAIController_h__Script_WeLeftTheLightsOn_112947903(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_ShooterAIController_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_ShooterAIController_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
