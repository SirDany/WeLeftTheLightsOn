// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeLeftTheLightsOn_init() {}
	WELEFTTHELIGHTSON_API UFunction* Z_Construct_UDelegateFunction_WeLeftTheLightsOn_BulletCountUpdatedDelegate__DelegateSignature();
	WELEFTTHELIGHTSON_API UFunction* Z_Construct_UDelegateFunction_WeLeftTheLightsOn_DamagedDelegate__DelegateSignature();
	WELEFTTHELIGHTSON_API UFunction* Z_Construct_UDelegateFunction_WeLeftTheLightsOn_PawnDeathDelegate__DelegateSignature();
	WELEFTTHELIGHTSON_API UFunction* Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature();
	WELEFTTHELIGHTSON_API UFunction* Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WeLeftTheLightsOn;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WeLeftTheLightsOn()
	{
		if (!Z_Registration_Info_UPackage__Script_WeLeftTheLightsOn.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_WeLeftTheLightsOn_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeLeftTheLightsOn_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeLeftTheLightsOn_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeLeftTheLightsOn_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeLeftTheLightsOn_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WeLeftTheLightsOn",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x093FB565,
				0x739558F5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WeLeftTheLightsOn.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WeLeftTheLightsOn.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WeLeftTheLightsOn(Z_Construct_UPackage__Script_WeLeftTheLightsOn, TEXT("/Script/WeLeftTheLightsOn"), Z_Registration_Info_UPackage__Script_WeLeftTheLightsOn, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x093FB565, 0x739558F5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
