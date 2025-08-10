// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BloodyParky/WordlsObject/Bone/Bone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBone() {}
// Cross Module References
	BLOODYPARKY_API UClass* Z_Construct_UClass_ABone_NoRegister();
	BLOODYPARKY_API UClass* Z_Construct_UClass_ABone();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BloodyParky();
// End Cross Module References
	void ABone::StaticRegisterNativesABone()
	{
	}
	UClass* Z_Construct_UClass_ABone_NoRegister()
	{
		return ABone::StaticClass();
	}
	struct Z_Construct_UClass_ABone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BloodyParky,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WordlsObject/Bone/Bone.h" },
		{ "ModuleRelativePath", "WordlsObject/Bone/Bone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABone_Statics::ClassParams = {
		&ABone::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABone, 3449942807);
	template<> BLOODYPARKY_API UClass* StaticClass<ABone>()
	{
		return ABone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABone(Z_Construct_UClass_ABone, &ABone::StaticClass, TEXT("/Script/BloodyParky"), TEXT("ABone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
