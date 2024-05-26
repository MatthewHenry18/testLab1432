// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LABRINTH_LabrinthCharacter_generated_h
#error "LabrinthCharacter.generated.h already included, missing '#pragma once' in LabrinthCharacter.h"
#endif
#define LABRINTH_LabrinthCharacter_generated_h

#define Labrinth_Source_Labrinth_LabrinthCharacter_h_20_SPARSE_DATA
#define Labrinth_Source_Labrinth_LabrinthCharacter_h_20_RPC_WRAPPERS
#define Labrinth_Source_Labrinth_LabrinthCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Labrinth_Source_Labrinth_LabrinthCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALabrinthCharacter(); \
	friend struct Z_Construct_UClass_ALabrinthCharacter_Statics; \
public: \
	DECLARE_CLASS(ALabrinthCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Labrinth"), NO_API) \
	DECLARE_SERIALIZER(ALabrinthCharacter)


#define Labrinth_Source_Labrinth_LabrinthCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesALabrinthCharacter(); \
	friend struct Z_Construct_UClass_ALabrinthCharacter_Statics; \
public: \
	DECLARE_CLASS(ALabrinthCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Labrinth"), NO_API) \
	DECLARE_SERIALIZER(ALabrinthCharacter)


#define Labrinth_Source_Labrinth_LabrinthCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALabrinthCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALabrinthCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALabrinthCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALabrinthCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALabrinthCharacter(ALabrinthCharacter&&); \
	NO_API ALabrinthCharacter(const ALabrinthCharacter&); \
public:


#define Labrinth_Source_Labrinth_LabrinthCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALabrinthCharacter(ALabrinthCharacter&&); \
	NO_API ALabrinthCharacter(const ALabrinthCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALabrinthCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALabrinthCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALabrinthCharacter)


#define Labrinth_Source_Labrinth_LabrinthCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ALabrinthCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ALabrinthCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ALabrinthCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ALabrinthCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ALabrinthCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ALabrinthCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ALabrinthCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ALabrinthCharacter, L_MotionController); }


#define Labrinth_Source_Labrinth_LabrinthCharacter_h_17_PROLOG
#define Labrinth_Source_Labrinth_LabrinthCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Labrinth_Source_Labrinth_LabrinthCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Labrinth_Source_Labrinth_LabrinthCharacter_h_20_SPARSE_DATA \
	Labrinth_Source_Labrinth_LabrinthCharacter_h_20_RPC_WRAPPERS \
	Labrinth_Source_Labrinth_LabrinthCharacter_h_20_INCLASS \
	Labrinth_Source_Labrinth_LabrinthCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Labrinth_Source_Labrinth_LabrinthCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Labrinth_Source_Labrinth_LabrinthCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Labrinth_Source_Labrinth_LabrinthCharacter_h_20_SPARSE_DATA \
	Labrinth_Source_Labrinth_LabrinthCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Labrinth_Source_Labrinth_LabrinthCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Labrinth_Source_Labrinth_LabrinthCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABRINTH_API UClass* StaticClass<class ALabrinthCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Labrinth_Source_Labrinth_LabrinthCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
