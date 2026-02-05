// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterStateTreeUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterStateTreeUtility() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionCommonBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskCommonBase();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterAIController_NoRegister();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterNPC_NoRegister();
WELEFTTHELIGHTSON_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData();
WELEFTTHELIGHTSON_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceActorTask();
WELEFTTHELIGHTSON_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData();
WELEFTTHELIGHTSON_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceLocationTask();
WELEFTTHELIGHTSON_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetCondition();
WELEFTTHELIGHTSON_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData();
WELEFTTHELIGHTSON_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData();
WELEFTTHELIGHTSON_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSenseEnemiesTask();
WELEFTTHELIGHTSON_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData();
WELEFTTHELIGHTSON_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSetRandomFloatTask();
WELEFTTHELIGHTSON_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData();
WELEFTTHELIGHTSON_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeShootAtTargetTask();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FStateTreeLineOfSightToTargetConditionInstanceData ****************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData;
class UScriptStruct* FStateTreeLineOfSightToTargetConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_WeLeftTheLightsOn(), TEXT("StateTreeLineOfSightToTargetConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Instance data struct for the FStateTreeLineOfSightToTargetCondition condition\n */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance data struct for the FStateTreeLineOfSightToTargetCondition condition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Targeting character */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Targeting character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Condition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Target to check line of sight for */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target to check line of sight for" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineOfSightConeAngle_MetaData[] = {
		{ "Category", "Condition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max allowed line of sight cone angle, in degrees */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max allowed line of sight cone angle, in degrees" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfVerticalLineOfSightChecks_MetaData[] = {
		{ "Category", "Condition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of vertical line of sight checks to run to try and get around low obstacles */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of vertical line of sight checks to run to try and get around low obstacles" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMustHaveLineOfSight_MetaData[] = {
		{ "Category", "Condition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the condition passes if the character has line of sight */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the condition passes if the character has line of sight" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineOfSightConeAngle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfVerticalLineOfSightChecks;
	static void NewProp_bMustHaveLineOfSight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMustHaveLineOfSight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeLineOfSightToTargetConditionInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeLineOfSightToTargetConditionInstanceData, Character), Z_Construct_UClass_AShooterNPC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeLineOfSightToTargetConditionInstanceData, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::NewProp_LineOfSightConeAngle = { "LineOfSightConeAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeLineOfSightToTargetConditionInstanceData, LineOfSightConeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineOfSightConeAngle_MetaData), NewProp_LineOfSightConeAngle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::NewProp_NumberOfVerticalLineOfSightChecks = { "NumberOfVerticalLineOfSightChecks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeLineOfSightToTargetConditionInstanceData, NumberOfVerticalLineOfSightChecks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfVerticalLineOfSightChecks_MetaData), NewProp_NumberOfVerticalLineOfSightChecks_MetaData) };
void Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::NewProp_bMustHaveLineOfSight_SetBit(void* Obj)
{
	((FStateTreeLineOfSightToTargetConditionInstanceData*)Obj)->bMustHaveLineOfSight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::NewProp_bMustHaveLineOfSight = { "bMustHaveLineOfSight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeLineOfSightToTargetConditionInstanceData), &Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::NewProp_bMustHaveLineOfSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMustHaveLineOfSight_MetaData), NewProp_bMustHaveLineOfSight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::NewProp_LineOfSightConeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::NewProp_NumberOfVerticalLineOfSightChecks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::NewProp_bMustHaveLineOfSight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
	nullptr,
	&NewStructOps,
	"StateTreeLineOfSightToTargetConditionInstanceData",
	Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::PropPointers),
	sizeof(FStateTreeLineOfSightToTargetConditionInstanceData),
	alignof(FStateTreeLineOfSightToTargetConditionInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData.InnerSingleton;
}
// ********** End ScriptStruct FStateTreeLineOfSightToTargetConditionInstanceData ******************

// ********** Begin ScriptStruct FStateTreeLineOfSightToTargetCondition ****************************
static_assert(std::is_polymorphic<FStateTreeLineOfSightToTargetCondition>() == std::is_polymorphic<FStateTreeConditionCommonBase>(), "USTRUCT FStateTreeLineOfSightToTargetCondition cannot be polymorphic unless super FStateTreeConditionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetCondition;
class UScriptStruct* FStateTreeLineOfSightToTargetCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetCondition, (UObject*)Z_Construct_UPackage__Script_WeLeftTheLightsOn(), TEXT("StateTreeLineOfSightToTargetCondition"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetCondition.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Shooter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  StateTree condition to check if the character is grounded\n */" },
#endif
		{ "DisplayName", "Has Line of Sight to Target" },
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree condition to check if the character is grounded" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeLineOfSightToTargetCondition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetCondition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
	Z_Construct_UScriptStruct_FStateTreeConditionCommonBase,
	&NewStructOps,
	"StateTreeLineOfSightToTargetCondition",
	nullptr,
	0,
	sizeof(FStateTreeLineOfSightToTargetCondition),
	alignof(FStateTreeLineOfSightToTargetCondition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetCondition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetCondition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetCondition()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetCondition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetCondition.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetCondition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetCondition.InnerSingleton;
}
// ********** End ScriptStruct FStateTreeLineOfSightToTargetCondition ******************************

// ********** Begin ScriptStruct FStateTreeFaceActorInstanceData ***********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData;
class UScriptStruct* FStateTreeFaceActorInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData, (UObject*)Z_Construct_UPackage__Script_WeLeftTheLightsOn(), TEXT("StateTreeFaceActorInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Instance data struct for the Face Towards Actor StateTree task\n */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance data struct for the Face Towards Actor StateTree task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AI Controller that will determine the focused actor */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Controller that will determine the focused actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorToFaceTowards_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor that will be faced towards */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor that will be faced towards" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToFaceTowards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeFaceActorInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeFaceActorInstanceData, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::NewProp_ActorToFaceTowards = { "ActorToFaceTowards", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeFaceActorInstanceData, ActorToFaceTowards), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorToFaceTowards_MetaData), NewProp_ActorToFaceTowards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::NewProp_ActorToFaceTowards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
	nullptr,
	&NewStructOps,
	"StateTreeFaceActorInstanceData",
	Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::PropPointers),
	sizeof(FStateTreeFaceActorInstanceData),
	alignof(FStateTreeFaceActorInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData.InnerSingleton;
}
// ********** End ScriptStruct FStateTreeFaceActorInstanceData *************************************

// ********** Begin ScriptStruct FStateTreeFaceActorTask *******************************************
static_assert(std::is_polymorphic<FStateTreeFaceActorTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeFaceActorTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask;
class UScriptStruct* FStateTreeFaceActorTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeFaceActorTask, (UObject*)Z_Construct_UPackage__Script_WeLeftTheLightsOn(), TEXT("StateTreeFaceActorTask"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStateTreeFaceActorTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Shooter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  StateTree task to face an AI-Controlled Pawn towards an Actor\n */" },
#endif
		{ "DisplayName", "Face Towards Actor" },
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree task to face an AI-Controlled Pawn towards an Actor" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeFaceActorTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeFaceActorTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"StateTreeFaceActorTask",
	nullptr,
	0,
	sizeof(FStateTreeFaceActorTask),
	alignof(FStateTreeFaceActorTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceActorTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeFaceActorTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceActorTask()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeFaceActorTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask.InnerSingleton;
}
// ********** End ScriptStruct FStateTreeFaceActorTask *********************************************

// ********** Begin ScriptStruct FStateTreeFaceLocationInstanceData ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData;
class UScriptStruct* FStateTreeFaceLocationInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData, (UObject*)Z_Construct_UPackage__Script_WeLeftTheLightsOn(), TEXT("StateTreeFaceLocationInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Instance data struct for the Face Towards Location StateTree task\n */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance data struct for the Face Towards Location StateTree task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AI Controller that will determine the focused location */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Controller that will determine the focused location" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceLocation_MetaData[] = {
		{ "Category", "Parameter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Location that will be faced towards */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location that will be faced towards" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FaceLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeFaceLocationInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeFaceLocationInstanceData, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::NewProp_FaceLocation = { "FaceLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeFaceLocationInstanceData, FaceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceLocation_MetaData), NewProp_FaceLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::NewProp_FaceLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
	nullptr,
	&NewStructOps,
	"StateTreeFaceLocationInstanceData",
	Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::PropPointers),
	sizeof(FStateTreeFaceLocationInstanceData),
	alignof(FStateTreeFaceLocationInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData.InnerSingleton;
}
// ********** End ScriptStruct FStateTreeFaceLocationInstanceData **********************************

// ********** Begin ScriptStruct FStateTreeFaceLocationTask ****************************************
static_assert(std::is_polymorphic<FStateTreeFaceLocationTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeFaceLocationTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask;
class UScriptStruct* FStateTreeFaceLocationTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeFaceLocationTask, (UObject*)Z_Construct_UPackage__Script_WeLeftTheLightsOn(), TEXT("StateTreeFaceLocationTask"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStateTreeFaceLocationTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Shooter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  StateTree task to face an AI-Controlled Pawn towards a world location\n */" },
#endif
		{ "DisplayName", "Face Towards Location" },
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree task to face an AI-Controlled Pawn towards a world location" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeFaceLocationTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeFaceLocationTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"StateTreeFaceLocationTask",
	nullptr,
	0,
	sizeof(FStateTreeFaceLocationTask),
	alignof(FStateTreeFaceLocationTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFaceLocationTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeFaceLocationTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFaceLocationTask()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeFaceLocationTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask.InnerSingleton;
}
// ********** End ScriptStruct FStateTreeFaceLocationTask ******************************************

// ********** Begin ScriptStruct FStateTreeSetRandomFloatData **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatData;
class UScriptStruct* FStateTreeSetRandomFloatData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData, (UObject*)Z_Construct_UPackage__Script_WeLeftTheLightsOn(), TEXT("StateTreeSetRandomFloatData"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Instance data struct for the Set Random Float StateTree task\n */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance data struct for the Set Random Float StateTree task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "Parameter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum random value */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum random value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "Parameter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum random value */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum random value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutValue_MetaData[] = {
		{ "Category", "Output" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Output calculated value */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Output calculated value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeSetRandomFloatData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeSetRandomFloatData, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeSetRandomFloatData, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeSetRandomFloatData, OutValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutValue_MetaData), NewProp_OutValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics::NewProp_OutValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
	nullptr,
	&NewStructOps,
	"StateTreeSetRandomFloatData",
	Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics::PropPointers),
	sizeof(FStateTreeSetRandomFloatData),
	alignof(FStateTreeSetRandomFloatData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatData.InnerSingleton;
}
// ********** End ScriptStruct FStateTreeSetRandomFloatData ****************************************

// ********** Begin ScriptStruct FStateTreeSetRandomFloatTask **************************************
static_assert(std::is_polymorphic<FStateTreeSetRandomFloatTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeSetRandomFloatTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatTask;
class UScriptStruct* FStateTreeSetRandomFloatTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSetRandomFloatTask, (UObject*)Z_Construct_UPackage__Script_WeLeftTheLightsOn(), TEXT("StateTreeSetRandomFloatTask"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatTask.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStateTreeSetRandomFloatTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Shooter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  StateTree task to calculate a random float value within the specified range\n */" },
#endif
		{ "DisplayName", "Set Random Float" },
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree task to calculate a random float value within the specified range" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeSetRandomFloatTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeSetRandomFloatTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"StateTreeSetRandomFloatTask",
	nullptr,
	0,
	sizeof(FStateTreeSetRandomFloatTask),
	alignof(FStateTreeSetRandomFloatTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSetRandomFloatTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeSetRandomFloatTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSetRandomFloatTask()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeSetRandomFloatTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatTask.InnerSingleton;
}
// ********** End ScriptStruct FStateTreeSetRandomFloatTask ****************************************

// ********** Begin ScriptStruct FStateTreeShootAtTargetInstanceData *******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetInstanceData;
class UScriptStruct* FStateTreeShootAtTargetInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData, (UObject*)Z_Construct_UPackage__Script_WeLeftTheLightsOn(), TEXT("StateTreeShootAtTargetInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetInstanceData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Instance data struct for the Shoot At Target StateTree task\n */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance data struct for the Shoot At Target StateTree task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** NPC that will do the shooting */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NPC that will do the shooting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Target to shoot at */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target to shoot at" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeShootAtTargetInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeShootAtTargetInstanceData, Character), Z_Construct_UClass_AShooterNPC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeShootAtTargetInstanceData, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
	nullptr,
	&NewStructOps,
	"StateTreeShootAtTargetInstanceData",
	Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData_Statics::PropPointers),
	sizeof(FStateTreeShootAtTargetInstanceData),
	alignof(FStateTreeShootAtTargetInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetInstanceData.InnerSingleton;
}
// ********** End ScriptStruct FStateTreeShootAtTargetInstanceData *********************************

// ********** Begin ScriptStruct FStateTreeShootAtTargetTask ***************************************
static_assert(std::is_polymorphic<FStateTreeShootAtTargetTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeShootAtTargetTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetTask;
class UScriptStruct* FStateTreeShootAtTargetTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeShootAtTargetTask, (UObject*)Z_Construct_UPackage__Script_WeLeftTheLightsOn(), TEXT("StateTreeShootAtTargetTask"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetTask.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStateTreeShootAtTargetTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Shooter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  StateTree task to have an NPC shoot at an actor\n */" },
#endif
		{ "DisplayName", "Shoot at Target" },
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree task to have an NPC shoot at an actor" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeShootAtTargetTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeShootAtTargetTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"StateTreeShootAtTargetTask",
	nullptr,
	0,
	sizeof(FStateTreeShootAtTargetTask),
	alignof(FStateTreeShootAtTargetTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeShootAtTargetTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeShootAtTargetTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeShootAtTargetTask()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeShootAtTargetTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetTask.InnerSingleton;
}
// ********** End ScriptStruct FStateTreeShootAtTargetTask *****************************************

// ********** Begin ScriptStruct FStateTreeSenseEnemiesInstanceData ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesInstanceData;
class UScriptStruct* FStateTreeSenseEnemiesInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData, (UObject*)Z_Construct_UPackage__Script_WeLeftTheLightsOn(), TEXT("StateTreeSenseEnemiesInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesInstanceData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Instance data struct for the Sense Enemies StateTree task\n */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance data struct for the Sense Enemies StateTree task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sensing AI Controller */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sensing AI Controller" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sensing NPC */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sensing NPC" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Output" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sensed actor to target */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sensed actor to target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvestigateLocation_MetaData[] = {
		{ "Category", "Output" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sensed location to investigate */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sensed location to investigate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasTarget_MetaData[] = {
		{ "Category", "Output" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if a target was successfully sensed */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if a target was successfully sensed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasInvestigateLocation_MetaData[] = {
		{ "Category", "Output" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if an investigate location was successfully sensed */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if an investigate location was successfully sensed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenseTag_MetaData[] = {
		{ "Category", "Parameter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tag required on sensed actors */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag required on sensed actors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectLineOfSightCone_MetaData[] = {
		{ "Category", "Parameter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Line of sight cone half angle to consider a full sense */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Line of sight cone half angle to consider a full sense" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastStimulusStrength_MetaData[] = {
		{ "Category", "StateTreeSenseEnemiesInstanceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Strength of the last processed stimulus */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Strength of the last processed stimulus" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InvestigateLocation;
	static void NewProp_bHasTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTarget;
	static void NewProp_bHasInvestigateLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasInvestigateLocation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SenseTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectLineOfSightCone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastStimulusStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeSenseEnemiesInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeSenseEnemiesInstanceData, Controller), Z_Construct_UClass_AShooterAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeSenseEnemiesInstanceData, Character), Z_Construct_UClass_AShooterNPC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeSenseEnemiesInstanceData, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_InvestigateLocation = { "InvestigateLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeSenseEnemiesInstanceData, InvestigateLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvestigateLocation_MetaData), NewProp_InvestigateLocation_MetaData) };
void Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_bHasTarget_SetBit(void* Obj)
{
	((FStateTreeSenseEnemiesInstanceData*)Obj)->bHasTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_bHasTarget = { "bHasTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeSenseEnemiesInstanceData), &Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_bHasTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasTarget_MetaData), NewProp_bHasTarget_MetaData) };
void Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_bHasInvestigateLocation_SetBit(void* Obj)
{
	((FStateTreeSenseEnemiesInstanceData*)Obj)->bHasInvestigateLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_bHasInvestigateLocation = { "bHasInvestigateLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeSenseEnemiesInstanceData), &Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_bHasInvestigateLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasInvestigateLocation_MetaData), NewProp_bHasInvestigateLocation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_SenseTag = { "SenseTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeSenseEnemiesInstanceData, SenseTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenseTag_MetaData), NewProp_SenseTag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_DirectLineOfSightCone = { "DirectLineOfSightCone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeSenseEnemiesInstanceData, DirectLineOfSightCone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectLineOfSightCone_MetaData), NewProp_DirectLineOfSightCone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_LastStimulusStrength = { "LastStimulusStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeSenseEnemiesInstanceData, LastStimulusStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastStimulusStrength_MetaData), NewProp_LastStimulusStrength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_InvestigateLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_bHasTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_bHasInvestigateLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_SenseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_DirectLineOfSightCone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewProp_LastStimulusStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
	nullptr,
	&NewStructOps,
	"StateTreeSenseEnemiesInstanceData",
	Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::PropPointers),
	sizeof(FStateTreeSenseEnemiesInstanceData),
	alignof(FStateTreeSenseEnemiesInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesInstanceData.InnerSingleton;
}
// ********** End ScriptStruct FStateTreeSenseEnemiesInstanceData **********************************

// ********** Begin ScriptStruct FStateTreeSenseEnemiesTask ****************************************
static_assert(std::is_polymorphic<FStateTreeSenseEnemiesTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeSenseEnemiesTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesTask;
class UScriptStruct* FStateTreeSenseEnemiesTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSenseEnemiesTask, (UObject*)Z_Construct_UPackage__Script_WeLeftTheLightsOn(), TEXT("StateTreeSenseEnemiesTask"));
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesTask.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStateTreeSenseEnemiesTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Shooter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  StateTree task to have an NPC process AI Perceptions and sense nearby enemies\n */" },
#endif
		{ "DisplayName", "Sense Enemies" },
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterStateTreeUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree task to have an NPC process AI Perceptions and sense nearby enemies" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeSenseEnemiesTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeSenseEnemiesTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"StateTreeSenseEnemiesTask",
	nullptr,
	0,
	sizeof(FStateTreeSenseEnemiesTask),
	alignof(FStateTreeSenseEnemiesTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSenseEnemiesTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeSenseEnemiesTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSenseEnemiesTask()
{
	if (!Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeSenseEnemiesTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesTask.InnerSingleton;
}
// ********** End ScriptStruct FStateTreeSenseEnemiesTask ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_ShooterStateTreeUtility_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeLineOfSightToTargetConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData_Statics::NewStructOps, TEXT("StateTreeLineOfSightToTargetConditionInstanceData"), &Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeLineOfSightToTargetConditionInstanceData), 910622779U) },
		{ FStateTreeLineOfSightToTargetCondition::StaticStruct, Z_Construct_UScriptStruct_FStateTreeLineOfSightToTargetCondition_Statics::NewStructOps, TEXT("StateTreeLineOfSightToTargetCondition"), &Z_Registration_Info_UScriptStruct_FStateTreeLineOfSightToTargetCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeLineOfSightToTargetCondition), 3378060496U) },
		{ FStateTreeFaceActorInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeFaceActorInstanceData_Statics::NewStructOps, TEXT("StateTreeFaceActorInstanceData"), &Z_Registration_Info_UScriptStruct_FStateTreeFaceActorInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeFaceActorInstanceData), 1454139412U) },
		{ FStateTreeFaceActorTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeFaceActorTask_Statics::NewStructOps, TEXT("StateTreeFaceActorTask"), &Z_Registration_Info_UScriptStruct_FStateTreeFaceActorTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeFaceActorTask), 4193160277U) },
		{ FStateTreeFaceLocationInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeFaceLocationInstanceData_Statics::NewStructOps, TEXT("StateTreeFaceLocationInstanceData"), &Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeFaceLocationInstanceData), 1766869851U) },
		{ FStateTreeFaceLocationTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeFaceLocationTask_Statics::NewStructOps, TEXT("StateTreeFaceLocationTask"), &Z_Registration_Info_UScriptStruct_FStateTreeFaceLocationTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeFaceLocationTask), 354415552U) },
		{ FStateTreeSetRandomFloatData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeSetRandomFloatData_Statics::NewStructOps, TEXT("StateTreeSetRandomFloatData"), &Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeSetRandomFloatData), 2144615419U) },
		{ FStateTreeSetRandomFloatTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeSetRandomFloatTask_Statics::NewStructOps, TEXT("StateTreeSetRandomFloatTask"), &Z_Registration_Info_UScriptStruct_FStateTreeSetRandomFloatTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeSetRandomFloatTask), 3512277352U) },
		{ FStateTreeShootAtTargetInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeShootAtTargetInstanceData_Statics::NewStructOps, TEXT("StateTreeShootAtTargetInstanceData"), &Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeShootAtTargetInstanceData), 3608580040U) },
		{ FStateTreeShootAtTargetTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeShootAtTargetTask_Statics::NewStructOps, TEXT("StateTreeShootAtTargetTask"), &Z_Registration_Info_UScriptStruct_FStateTreeShootAtTargetTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeShootAtTargetTask), 3482771400U) },
		{ FStateTreeSenseEnemiesInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeSenseEnemiesInstanceData_Statics::NewStructOps, TEXT("StateTreeSenseEnemiesInstanceData"), &Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeSenseEnemiesInstanceData), 2447272915U) },
		{ FStateTreeSenseEnemiesTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeSenseEnemiesTask_Statics::NewStructOps, TEXT("StateTreeSenseEnemiesTask"), &Z_Registration_Info_UScriptStruct_FStateTreeSenseEnemiesTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeSenseEnemiesTask), 291532693U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_ShooterStateTreeUtility_h__Script_WeLeftTheLightsOn_553324827(TEXT("/Script/WeLeftTheLightsOn"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_ShooterStateTreeUtility_h__Script_WeLeftTheLightsOn_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_ShooterStateTreeUtility_h__Script_WeLeftTheLightsOn_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
