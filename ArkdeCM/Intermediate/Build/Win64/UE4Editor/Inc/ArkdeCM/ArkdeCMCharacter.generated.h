// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARKDECM_ArkdeCMCharacter_generated_h
#error "ArkdeCMCharacter.generated.h already included, missing '#pragma once' in ArkdeCMCharacter.h"
#endif
#define ARKDECM_ArkdeCMCharacter_generated_h

#define ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_SPARSE_DATA
#define ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_RPC_WRAPPERS
#define ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArkdeCMCharacter(); \
	friend struct Z_Construct_UClass_AArkdeCMCharacter_Statics; \
public: \
	DECLARE_CLASS(AArkdeCMCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArkdeCM"), NO_API) \
	DECLARE_SERIALIZER(AArkdeCMCharacter)


#define ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAArkdeCMCharacter(); \
	friend struct Z_Construct_UClass_AArkdeCMCharacter_Statics; \
public: \
	DECLARE_CLASS(AArkdeCMCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArkdeCM"), NO_API) \
	DECLARE_SERIALIZER(AArkdeCMCharacter)


#define ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArkdeCMCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArkdeCMCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArkdeCMCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArkdeCMCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArkdeCMCharacter(AArkdeCMCharacter&&); \
	NO_API AArkdeCMCharacter(const AArkdeCMCharacter&); \
public:


#define ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArkdeCMCharacter(AArkdeCMCharacter&&); \
	NO_API AArkdeCMCharacter(const AArkdeCMCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArkdeCMCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArkdeCMCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArkdeCMCharacter)


#define ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AArkdeCMCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AArkdeCMCharacter, FollowCamera); }


#define ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_9_PROLOG
#define ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_SPARSE_DATA \
	ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_RPC_WRAPPERS \
	ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_INCLASS \
	ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_SPARSE_DATA \
	ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKDECM_API UClass* StaticClass<class AArkdeCMCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArkdeCM_Source_ArkdeCM_ArkdeCMCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
