// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLOODYPARKY_BloodyParkyCharacter_generated_h
#error "BloodyParkyCharacter.generated.h already included, missing '#pragma once' in BloodyParkyCharacter.h"
#endif
#define BLOODYPARKY_BloodyParkyCharacter_generated_h

#define BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_SPARSE_DATA
#define BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_RPC_WRAPPERS
#define BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloodyParkyCharacter(); \
	friend struct Z_Construct_UClass_ABloodyParkyCharacter_Statics; \
public: \
	DECLARE_CLASS(ABloodyParkyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BloodyParky"), NO_API) \
	DECLARE_SERIALIZER(ABloodyParkyCharacter)


#define BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABloodyParkyCharacter(); \
	friend struct Z_Construct_UClass_ABloodyParkyCharacter_Statics; \
public: \
	DECLARE_CLASS(ABloodyParkyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BloodyParky"), NO_API) \
	DECLARE_SERIALIZER(ABloodyParkyCharacter)


#define BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABloodyParkyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABloodyParkyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloodyParkyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloodyParkyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABloodyParkyCharacter(ABloodyParkyCharacter&&); \
	NO_API ABloodyParkyCharacter(const ABloodyParkyCharacter&); \
public:


#define BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABloodyParkyCharacter(ABloodyParkyCharacter&&); \
	NO_API ABloodyParkyCharacter(const ABloodyParkyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloodyParkyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloodyParkyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloodyParkyCharacter)


#define BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(ABloodyParkyCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABloodyParkyCharacter, CameraBoom); }


#define BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_10_PROLOG
#define BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_SPARSE_DATA \
	BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_RPC_WRAPPERS \
	BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_INCLASS \
	BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_SPARSE_DATA \
	BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_INCLASS_NO_PURE_DECLS \
	BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLOODYPARKY_API UClass* StaticClass<class ABloodyParkyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BloodyParky_Source_BloodyParky_BloodyParkyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
