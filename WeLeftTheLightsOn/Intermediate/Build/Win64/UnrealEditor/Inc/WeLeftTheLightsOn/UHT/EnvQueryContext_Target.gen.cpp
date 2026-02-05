// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvQueryContext_Target.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_Target() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UEnvQueryContext_Target();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UEnvQueryContext_Target_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnvQueryContext_Target **************************************************
void UEnvQueryContext_Target::StaticRegisterNativesUEnvQueryContext_Target()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnvQueryContext_Target;
UClass* UEnvQueryContext_Target::GetPrivateStaticClass()
{
	using TClass = UEnvQueryContext_Target;
	if (!Z_Registration_Info_UClass_UEnvQueryContext_Target.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnvQueryContext_Target"),
			Z_Registration_Info_UClass_UEnvQueryContext_Target.InnerSingleton,
			StaticRegisterNativesUEnvQueryContext_Target,
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
	return Z_Registration_Info_UClass_UEnvQueryContext_Target.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnvQueryContext_Target_NoRegister()
{
	return UEnvQueryContext_Target::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnvQueryContext_Target_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Custom EnvQuery Context that returns the actor currently targeted by an NPC\n */" },
#endif
		{ "IncludePath", "Variant_Shooter/AI/EnvQueryContext_Target.h" },
		{ "ModuleRelativePath", "Variant_Shooter/AI/EnvQueryContext_Target.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom EnvQuery Context that returns the actor currently targeted by an NPC" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_Target>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvQueryContext_Target_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_Target_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_Target_Statics::ClassParams = {
	&UEnvQueryContext_Target::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_Target_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryContext_Target_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryContext_Target()
{
	if (!Z_Registration_Info_UClass_UEnvQueryContext_Target.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryContext_Target.OuterSingleton, Z_Construct_UClass_UEnvQueryContext_Target_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryContext_Target.OuterSingleton;
}
UEnvQueryContext_Target::UEnvQueryContext_Target(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext_Target);
UEnvQueryContext_Target::~UEnvQueryContext_Target() {}
// ********** End Class UEnvQueryContext_Target ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_EnvQueryContext_Target_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryContext_Target, UEnvQueryContext_Target::StaticClass, TEXT("UEnvQueryContext_Target"), &Z_Registration_Info_UClass_UEnvQueryContext_Target, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryContext_Target), 2666618954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_EnvQueryContext_Target_h__Script_WeLeftTheLightsOn_3767250083(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_EnvQueryContext_Target_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_Variant_Shooter_AI_EnvQueryContext_Target_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
