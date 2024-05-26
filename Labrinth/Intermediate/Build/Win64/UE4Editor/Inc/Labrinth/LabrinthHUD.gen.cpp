// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Labrinth/LabrinthHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLabrinthHUD() {}
// Cross Module References
	LABRINTH_API UClass* Z_Construct_UClass_ALabrinthHUD_NoRegister();
	LABRINTH_API UClass* Z_Construct_UClass_ALabrinthHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Labrinth();
// End Cross Module References
	void ALabrinthHUD::StaticRegisterNativesALabrinthHUD()
	{
	}
	UClass* Z_Construct_UClass_ALabrinthHUD_NoRegister()
	{
		return ALabrinthHUD::StaticClass();
	}
	struct Z_Construct_UClass_ALabrinthHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALabrinthHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Labrinth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALabrinthHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "LabrinthHUD.h" },
		{ "ModuleRelativePath", "LabrinthHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALabrinthHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALabrinthHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALabrinthHUD_Statics::ClassParams = {
		&ALabrinthHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALabrinthHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALabrinthHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALabrinthHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALabrinthHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALabrinthHUD, 2548755554);
	template<> LABRINTH_API UClass* StaticClass<ALabrinthHUD>()
	{
		return ALabrinthHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALabrinthHUD(Z_Construct_UClass_ALabrinthHUD, &ALabrinthHUD::StaticClass, TEXT("/Script/Labrinth"), TEXT("ALabrinthHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALabrinthHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
