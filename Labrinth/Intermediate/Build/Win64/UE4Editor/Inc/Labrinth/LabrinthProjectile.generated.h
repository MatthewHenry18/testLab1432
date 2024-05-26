// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef LABRINTH_LabrinthProjectile_generated_h
#error "LabrinthProjectile.generated.h already included, missing '#pragma once' in LabrinthProjectile.h"
#endif
#define LABRINTH_LabrinthProjectile_generated_h

#define Labrinth_Source_Labrinth_LabrinthProjectile_h_15_SPARSE_DATA
#define Labrinth_Source_Labrinth_LabrinthProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Labrinth_Source_Labrinth_LabrinthProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Labrinth_Source_Labrinth_LabrinthProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALabrinthProjectile(); \
	friend struct Z_Construct_UClass_ALabrinthProjectile_Statics; \
public: \
	DECLARE_CLASS(ALabrinthProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Labrinth"), NO_API) \
	DECLARE_SERIALIZER(ALabrinthProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Labrinth_Source_Labrinth_LabrinthProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALabrinthProjectile(); \
	friend struct Z_Construct_UClass_ALabrinthProjectile_Statics; \
public: \
	DECLARE_CLASS(ALabrinthProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Labrinth"), NO_API) \
	DECLARE_SERIALIZER(ALabrinthProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Labrinth_Source_Labrinth_LabrinthProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALabrinthProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALabrinthProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALabrinthProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALabrinthProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALabrinthProjectile(ALabrinthProjectile&&); \
	NO_API ALabrinthProjectile(const ALabrinthProjectile&); \
public:


#define Labrinth_Source_Labrinth_LabrinthProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALabrinthProjectile(ALabrinthProjectile&&); \
	NO_API ALabrinthProjectile(const ALabrinthProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALabrinthProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALabrinthProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALabrinthProjectile)


#define Labrinth_Source_Labrinth_LabrinthProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ALabrinthProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ALabrinthProjectile, ProjectileMovement); }


#define Labrinth_Source_Labrinth_LabrinthProjectile_h_12_PROLOG
#define Labrinth_Source_Labrinth_LabrinthProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Labrinth_Source_Labrinth_LabrinthProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Labrinth_Source_Labrinth_LabrinthProjectile_h_15_SPARSE_DATA \
	Labrinth_Source_Labrinth_LabrinthProjectile_h_15_RPC_WRAPPERS \
	Labrinth_Source_Labrinth_LabrinthProjectile_h_15_INCLASS \
	Labrinth_Source_Labrinth_LabrinthProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Labrinth_Source_Labrinth_LabrinthProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Labrinth_Source_Labrinth_LabrinthProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Labrinth_Source_Labrinth_LabrinthProjectile_h_15_SPARSE_DATA \
	Labrinth_Source_Labrinth_LabrinthProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Labrinth_Source_Labrinth_LabrinthProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Labrinth_Source_Labrinth_LabrinthProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABRINTH_API UClass* StaticClass<class ALabrinthProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Labrinth_Source_Labrinth_LabrinthProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
