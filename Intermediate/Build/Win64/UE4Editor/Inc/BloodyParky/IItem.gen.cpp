// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BloodyParky/WordlsObject/Item/IItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIItem() {}
// Cross Module References
	BLOODYPARKY_API UClass* Z_Construct_UClass_UIItem_NoRegister();
	BLOODYPARKY_API UClass* Z_Construct_UClass_UIItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BloodyParky();
// End Cross Module References
	void UIItem::StaticRegisterNativesUIItem()
	{
	}
	UClass* Z_Construct_UClass_UIItem_NoRegister()
	{
		return UIItem::StaticClass();
	}
	struct Z_Construct_UClass_UIItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BloodyParky,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIItem_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "WordlsObject/Item/IItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIItem_Statics::ClassParams = {
		&UIItem::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIItem, 1351976424);
	template<> BLOODYPARKY_API UClass* StaticClass<UIItem>()
	{
		return UIItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIItem(Z_Construct_UClass_UIItem, &UIItem::StaticClass, TEXT("/Script/BloodyParky"), TEXT("UIItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
