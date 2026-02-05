// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeLeftTheLightsOn/PlayerAbilitySystemComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerAbilitySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent();
WELEFTTHELIGHTSON_API UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerAbilitySystemComponent ********************************************
void UPlayerAbilitySystemComponent::StaticRegisterNativesUPlayerAbilitySystemComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerAbilitySystemComponent;
UClass* UPlayerAbilitySystemComponent::GetPrivateStaticClass()
{
	using TClass = UPlayerAbilitySystemComponent;
	if (!Z_Registration_Info_UClass_UPlayerAbilitySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerAbilitySystemComponent"),
			Z_Registration_Info_UClass_UPlayerAbilitySystemComponent.InnerSingleton,
			StaticRegisterNativesUPlayerAbilitySystemComponent,
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
	return Z_Registration_Info_UClass_UPlayerAbilitySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent_NoRegister()
{
	return UPlayerAbilitySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "PlayerAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "PlayerAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WeLeftTheLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::ClassParams = {
	&UPlayerAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAbilitySystemComponent.OuterSingleton;
}
UPlayerAbilitySystemComponent::UPlayerAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAbilitySystemComponent);
UPlayerAbilitySystemComponent::~UPlayerAbilitySystemComponent() {}
// ********** End Class UPlayerAbilitySystemComponent **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_PlayerAbilitySystemComponent_h__Script_WeLeftTheLightsOn_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAbilitySystemComponent, UPlayerAbilitySystemComponent::StaticClass, TEXT("UPlayerAbilitySystemComponent"), &Z_Registration_Info_UClass_UPlayerAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAbilitySystemComponent), 1858392255U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_PlayerAbilitySystemComponent_h__Script_WeLeftTheLightsOn_4239072085(TEXT("/Script/WeLeftTheLightsOn"),
	Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_PlayerAbilitySystemComponent_h__Script_WeLeftTheLightsOn_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeLeftTheLightsOn_Source_WeLeftTheLightsOn_PlayerAbilitySystemComponent_h__Script_WeLeftTheLightsOn_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
