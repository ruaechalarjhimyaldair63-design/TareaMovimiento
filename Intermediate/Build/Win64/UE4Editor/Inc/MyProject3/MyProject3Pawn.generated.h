// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT3_MyProject3Pawn_generated_h
#error "MyProject3Pawn.generated.h already included, missing '#pragma once' in MyProject3Pawn.h"
#endif
#define MYPROJECT3_MyProject3Pawn_generated_h

#define MyProject3_Source_MyProject3_MyProject3Pawn_h_11_SPARSE_DATA
#define MyProject3_Source_MyProject3_MyProject3Pawn_h_11_RPC_WRAPPERS
#define MyProject3_Source_MyProject3_MyProject3Pawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject3_Source_MyProject3_MyProject3Pawn_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject3Pawn(); \
	friend struct Z_Construct_UClass_AMyProject3Pawn_Statics; \
public: \
	DECLARE_CLASS(AMyProject3Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(AMyProject3Pawn)


#define MyProject3_Source_MyProject3_MyProject3Pawn_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject3Pawn(); \
	friend struct Z_Construct_UClass_AMyProject3Pawn_Statics; \
public: \
	DECLARE_CLASS(AMyProject3Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(AMyProject3Pawn)


#define MyProject3_Source_MyProject3_MyProject3Pawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject3Pawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject3Pawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject3Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject3Pawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject3Pawn(AMyProject3Pawn&&); \
	NO_API AMyProject3Pawn(const AMyProject3Pawn&); \
public:


#define MyProject3_Source_MyProject3_MyProject3Pawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject3Pawn(AMyProject3Pawn&&); \
	NO_API AMyProject3Pawn(const AMyProject3Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject3Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject3Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject3Pawn)


#define MyProject3_Source_MyProject3_MyProject3Pawn_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneMesh() { return STRUCT_OFFSET(AMyProject3Pawn, PlaneMesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AMyProject3Pawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AMyProject3Pawn, Camera); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(AMyProject3Pawn, Acceleration); } \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(AMyProject3Pawn, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(AMyProject3Pawn, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__MinSpeed() { return STRUCT_OFFSET(AMyProject3Pawn, MinSpeed); }


#define MyProject3_Source_MyProject3_MyProject3Pawn_h_8_PROLOG
#define MyProject3_Source_MyProject3_MyProject3Pawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_11_PRIVATE_PROPERTY_OFFSET \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_11_SPARSE_DATA \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_11_RPC_WRAPPERS \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_11_INCLASS \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject3_Source_MyProject3_MyProject3Pawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_11_PRIVATE_PROPERTY_OFFSET \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_11_SPARSE_DATA \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_11_INCLASS_NO_PURE_DECLS \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT3_API UClass* StaticClass<class AMyProject3Pawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject3_Source_MyProject3_MyProject3Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
