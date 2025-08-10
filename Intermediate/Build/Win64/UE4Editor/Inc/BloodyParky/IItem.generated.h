// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLOODYPARKY_IItem_generated_h
#error "IItem.generated.h already included, missing '#pragma once' in IItem.h"
#endif
#define BLOODYPARKY_IItem_generated_h

#define BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_SPARSE_DATA
#define BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_RPC_WRAPPERS
#define BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLOODYPARKY_API UIItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLOODYPARKY_API, UIItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BLOODYPARKY_API UIItem(UIItem&&); \
	BLOODYPARKY_API UIItem(const UIItem&); \
public:


#define BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLOODYPARKY_API UIItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BLOODYPARKY_API UIItem(UIItem&&); \
	BLOODYPARKY_API UIItem(const UIItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLOODYPARKY_API, UIItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIItem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIItem)


#define BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIItem(); \
	friend struct Z_Construct_UClass_UIItem_Statics; \
public: \
	DECLARE_CLASS(UIItem, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BloodyParky"), BLOODYPARKY_API) \
	DECLARE_SERIALIZER(UIItem)


#define BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_GENERATED_UINTERFACE_BODY() \
	BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_GENERATED_UINTERFACE_BODY() \
	BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIItem() {} \
public: \
	typedef UIItem UClassType; \
	typedef IIItem ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIItem() {} \
public: \
	typedef UIItem UClassType; \
	typedef IIItem ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_10_PROLOG
#define BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_SPARSE_DATA \
	BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_RPC_WRAPPERS \
	BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_SPARSE_DATA \
	BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLOODYPARKY_API UClass* StaticClass<class UIItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BloodyParky_Source_BloodyParky_WordlsObject_Item_IItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
