// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArkdeCM/ArkdeCMGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArkdeCMGameMode() {}
// Cross Module References
	ARKDECM_API UClass* Z_Construct_UClass_AArkdeCMGameMode_NoRegister();
	ARKDECM_API UClass* Z_Construct_UClass_AArkdeCMGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ArkdeCM();
// End Cross Module References
	void AArkdeCMGameMode::StaticRegisterNativesAArkdeCMGameMode()
	{
	}
	UClass* Z_Construct_UClass_AArkdeCMGameMode_NoRegister()
	{
		return AArkdeCMGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AArkdeCMGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArkdeCMGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArkdeCM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArkdeCMGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ArkdeCMGameMode.h" },
		{ "ModuleRelativePath", "ArkdeCMGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArkdeCMGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArkdeCMGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArkdeCMGameMode_Statics::ClassParams = {
		&AArkdeCMGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AArkdeCMGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArkdeCMGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArkdeCMGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArkdeCMGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArkdeCMGameMode, 1329854910);
	template<> ARKDECM_API UClass* StaticClass<AArkdeCMGameMode>()
	{
		return AArkdeCMGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArkdeCMGameMode(Z_Construct_UClass_AArkdeCMGameMode, &AArkdeCMGameMode::StaticClass, TEXT("/Script/ArkdeCM"), TEXT("AArkdeCMGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArkdeCMGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
