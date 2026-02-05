// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterPickup.h"
#include "Engine/DataTable.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterPickup() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterPickup();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterPickup_NoRegister();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AShooterWeapon_NoRegister();
WELEFTTHELIGHTSON_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponTableRow();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWeaponTableRow ***************************************************
static_assert(std::is_polymorphic<FWeaponTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWeaponTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWeaponTableRow;
class UScriptStruct* FWeaponTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWeaponTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponTableRow, (UObject*)Z_Construct_UPackage__Script_WeLeftTheLightsOn(), TEXT("WeaponTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_FWeaponTableRow.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWeaponTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Holds information about a type of weapon pickup\n */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds information about a type of weapon pickup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "WeaponTableRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mesh to display on the pickup */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh to display on the pickup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponToSpawn_MetaData[] = {
		{ "Category", "WeaponTableRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Weapon class to grant on pickup */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon class to grant on pickup" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWeaponTableRow_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponTableRow, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponTableRow_Statics::NewProp_WeaponToSpawn = { "WeaponToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponTableRow, WeaponToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AShooterWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponToSpawn_MetaData), NewProp_WeaponToSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTableRow_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTableRow_Statics::NewProp_WeaponToSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"WeaponTableRow",
	Z_Construct_UScriptStruct_FWeaponTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponTableRow_Statics::PropPointers),
	sizeof(FWeaponTableRow),
	alignof(FWeaponTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWeaponTableRow.InnerSingleton, Z_Construct_UScriptStruct_FWeaponTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWeaponTableRow.InnerSingleton;
}
// ********** End ScriptStruct FWeaponTableRow *****************************************************

// ********** Begin Class AShooterPickup Function BP_OnRespawn *************************************
static FName NAME_AShooterPickup_BP_OnRespawn = FName(TEXT("BP_OnRespawn"));
void AShooterPickup::BP_OnRespawn()
{
	UFunction* Func = FindFunctionChecked(NAME_AShooterPickup_BP_OnRespawn);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AShooterPickup_BP_OnRespawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Passes control to Blueprint to animate the pickup respawn. Should end by calling FinishRespawn */" },
#endif
		{ "DisplayName", "OnRespawn" },
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Passes control to Blueprint to animate the pickup respawn. Should end by calling FinishRespawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPickup_BP_OnRespawn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterPickup, nullptr, "BP_OnRespawn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPickup_BP_OnRespawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterPickup_BP_OnRespawn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AShooterPickup_BP_OnRespawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterPickup_BP_OnRespawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AShooterPickup Function BP_OnRespawn ***************************************

// ********** Begin Class AShooterPickup Function FinishRespawn ************************************
struct Z_Construct_UFunction_AShooterPickup_FinishRespawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables this pickup after respawning */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables this pickup after respawning" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPickup_FinishRespawn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterPickup, nullptr, "FinishRespawn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPickup_FinishRespawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterPickup_FinishRespawn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AShooterPickup_FinishRespawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterPickup_FinishRespawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterPickup::execFinishRespawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishRespawn();
	P_NATIVE_END;
}
// ********** End Class AShooterPickup Function FinishRespawn **************************************

// ********** Begin Class AShooterPickup Function OnOverlap ****************************************
struct Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics
{
	struct ShooterPickup_eventOnOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles collision overlap */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles collision overlap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPickup_eventOnOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPickup_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPickup_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPickup_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ShooterPickup_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ShooterPickup_eventOnOverlap_Parms), &Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPickup_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterPickup, nullptr, "OnOverlap", Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::ShooterPickup_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::ShooterPickup_eventOnOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShooterPickup_OnOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterPickup_OnOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterPickup::execOnOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AShooterPickup Function OnOverlap ******************************************

// ********** Begin Class AShooterPickup ***********************************************************
void AShooterPickup::StaticRegisterNativesAShooterPickup()
{
	UClass* Class = AShooterPickup::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishRespawn", &AShooterPickup::execFinishRespawn },
		{ "OnOverlap", &AShooterPickup::execOnOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AShooterPickup;
UClass* AShooterPickup::GetPrivateStaticClass()
{
	using TClass = AShooterPickup;
	if (!Z_Registration_Info_UClass_AShooterPickup.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterPickup"),
			Z_Registration_Info_UClass_AShooterPickup.InnerSingleton,
			StaticRegisterNativesAShooterPickup,
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
	return Z_Registration_Info_UClass_AShooterPickup.InnerSingleton;
}
UClass* Z_Construct_UClass_AShooterPickup_NoRegister()
{
	return AShooterPickup::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShooterPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple shooter game weapon pickup\n */" },
#endif
		{ "IncludePath", "Variant_Shooter/Weapons/ShooterPickup.h" },
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple shooter game weapon pickup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision sphere */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision sphere" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Weapon pickup mesh. Its mesh asset is set from the weapon data table */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon pickup mesh. Its mesh asset is set from the weapon data table" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[] = {
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Data on the type of picked weapon and visuals of this pickup */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data on the type of picked weapon and visuals of this pickup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ClampMax", "120" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time to wait before respawning this pickup */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/Weapons/ShooterPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time to wait before respawning this pickup" },
#endif
		{ "Units", "s" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterPickup_BP_OnRespawn, "BP_OnRespawn" }, // 2428515907
		{ &Z_Construct_UFunction_AShooterPickup_FinishRespawn, "FinishRespawn" }, // 1412525360
		{ &Z_Construct_UFunction_AShooterPickup_OnOverlap, "OnOverlap" }, // 3055908271
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPickup_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPickup, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollision_MetaData), NewProp_SphereCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPickup_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPickup, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterPickup_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPickup, WeaponType), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponType_MetaData), NewProp_WeaponType_MetaData) }; // 4101738896
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawnTime = { "RespawnTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPickup, RespawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnTime_MetaData), NewProp_RespawnTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPickup_Statics::NewProp_SphereCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPickup_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPickup_Statics::NewProp_WeaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawnTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShooterPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterPickup_Statics::ClassParams = {
	&AShooterPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AShooterPickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterPickup()
{
	if (!Z_Registration_Info_UClass_AShooterPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterPickup.OuterSingleton, Z_Construct_UClass_AShooterPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterPickup.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPickup);
AShooterPickup::~AShooterPickup() {}
// ********** End Class AShooterPickup *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_Weapons_ShooterPickup_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponTableRow::StaticStruct, Z_Construct_UScriptStruct_FWeaponTableRow_Statics::NewStructOps, TEXT("WeaponTableRow"), &Z_Registration_Info_UScriptStruct_FWeaponTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponTableRow), 3721075560U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterPickup, AShooterPickup::StaticClass, TEXT("AShooterPickup"), &Z_Registration_Info_UClass_AShooterPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterPickup), 1403439134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_Weapons_ShooterPickup_h__Script_WeLeftTheLightsOn_1986581401(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_Weapons_ShooterPickup_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_Weapons_ShooterPickup_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_Weapons_ShooterPickup_h__Script_WeLeftTheLightsOn_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_Weapons_ShooterPickup_h__Script_WeLeftTheLightsOn_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
