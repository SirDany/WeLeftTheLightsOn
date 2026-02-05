// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeLeftTheLightsOn/WLTLOFirstPersonCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWLTLOFirstPersonCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AWLTLOFirstPersonCharacter();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_AWLTLOFirstPersonCharacter_NoRegister();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWLTLOFirstPersonCharacter ***********************************************
void AWLTLOFirstPersonCharacter::StaticRegisterNativesAWLTLOFirstPersonCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWLTLOFirstPersonCharacter;
UClass* AWLTLOFirstPersonCharacter::GetPrivateStaticClass()
{
	using TClass = AWLTLOFirstPersonCharacter;
	if (!Z_Registration_Info_UClass_AWLTLOFirstPersonCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WLTLOFirstPersonCharacter"),
			Z_Registration_Info_UClass_AWLTLOFirstPersonCharacter.InnerSingleton,
			StaticRegisterNativesAWLTLOFirstPersonCharacter,
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
	return Z_Registration_Info_UClass_AWLTLOFirstPersonCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AWLTLOFirstPersonCharacter_NoRegister()
{
	return AWLTLOFirstPersonCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWLTLOFirstPersonCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WLTLOFirstPersonCharacter.h" },
		{ "ModuleRelativePath", "WLTLOFirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerASC_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Adds abilities component to the player character\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WLTLOFirstPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds abilities component to the player character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWLTLOFirstPersonCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWLTLOFirstPersonCharacter_Statics::NewProp_PlayerASC = { "PlayerASC", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWLTLOFirstPersonCharacter, PlayerASC), Z_Construct_UClass_UPlayerAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerASC_MetaData), NewProp_PlayerASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWLTLOFirstPersonCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWLTLOFirstPersonCharacter_Statics::NewProp_PlayerASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWLTLOFirstPersonCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWLTLOFirstPersonCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWLTLOFirstPersonCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWLTLOFirstPersonCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AWLTLOFirstPersonCharacter, IAbilitySystemInterface), false },  // 1199015870
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWLTLOFirstPersonCharacter_Statics::ClassParams = {
	&AWLTLOFirstPersonCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWLTLOFirstPersonCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWLTLOFirstPersonCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWLTLOFirstPersonCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AWLTLOFirstPersonCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWLTLOFirstPersonCharacter()
{
	if (!Z_Registration_Info_UClass_AWLTLOFirstPersonCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWLTLOFirstPersonCharacter.OuterSingleton, Z_Construct_UClass_AWLTLOFirstPersonCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWLTLOFirstPersonCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWLTLOFirstPersonCharacter);
AWLTLOFirstPersonCharacter::~AWLTLOFirstPersonCharacter() {}
// ********** End Class AWLTLOFirstPersonCharacter *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WLTLOFirstPersonCharacter_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWLTLOFirstPersonCharacter, AWLTLOFirstPersonCharacter::StaticClass, TEXT("AWLTLOFirstPersonCharacter"), &Z_Registration_Info_UClass_AWLTLOFirstPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWLTLOFirstPersonCharacter), 6746604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WLTLOFirstPersonCharacter_h__Script_WeLeftTheLightsOn_462789715(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WLTLOFirstPersonCharacter_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_WLTLOFirstPersonCharacter_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
