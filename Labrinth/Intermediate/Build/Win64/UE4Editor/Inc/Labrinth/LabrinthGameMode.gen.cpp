// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Labrinth/LabrinthGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLabrinthGameMode() {}
// Cross Module References
	LABRINTH_API UClass* Z_Construct_UClass_ALabrinthGameMode_NoRegister();
	LABRINTH_API UClass* Z_Construct_UClass_ALabrinthGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Labrinth();
// End Cross Module References
	void ALabrinthGameMode::StaticRegisterNativesALabrinthGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALabrinthGameMode_NoRegister()
	{
		return ALabrinthGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALabrinthGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALabrinthGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Labrinth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALabrinthGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LabrinthGameMode.h" },
		{ "ModuleRelativePath", "LabrinthGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALabrinthGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALabrinthGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALabrinthGameMode_Statics::ClassParams = {
		&ALabrinthGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALabrinthGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALabrinthGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALabrinthGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALabrinthGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALabrinthGameMode, 2908658744);
	template<> LABRINTH_API UClass* StaticClass<ALabrinthGameMode>()
	{
		return ALabrinthGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALabrinthGameMode(Z_Construct_UClass_ALabrinthGameMode, &ALabrinthGameMode::StaticClass, TEXT("/Script/Labrinth"), TEXT("ALabrinthGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALabrinthGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
