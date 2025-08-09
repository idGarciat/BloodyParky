// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BloodyParky/BloodyParkyGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodyParkyGameMode() {}
// Cross Module References
	BLOODYPARKY_API UClass* Z_Construct_UClass_ABloodyParkyGameMode_NoRegister();
	BLOODYPARKY_API UClass* Z_Construct_UClass_ABloodyParkyGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BloodyParky();
// End Cross Module References
	void ABloodyParkyGameMode::StaticRegisterNativesABloodyParkyGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABloodyParkyGameMode_NoRegister()
	{
		return ABloodyParkyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABloodyParkyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloodyParkyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BloodyParky,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloodyParkyGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BloodyParkyGameMode.h" },
		{ "ModuleRelativePath", "BloodyParkyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloodyParkyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloodyParkyGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloodyParkyGameMode_Statics::ClassParams = {
		&ABloodyParkyGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloodyParkyGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloodyParkyGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloodyParkyGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloodyParkyGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloodyParkyGameMode, 2539686172);
	template<> BLOODYPARKY_API UClass* StaticClass<ABloodyParkyGameMode>()
	{
		return ABloodyParkyGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloodyParkyGameMode(Z_Construct_UClass_ABloodyParkyGameMode, &ABloodyParkyGameMode::StaticClass, TEXT("/Script/BloodyParky"), TEXT("ABloodyParkyGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloodyParkyGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
