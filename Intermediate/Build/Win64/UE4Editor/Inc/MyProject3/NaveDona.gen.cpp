// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject3/NaveDona.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveDona() {}
// Cross Module References
	MYPROJECT3_API UClass* Z_Construct_UClass_ANaveDona_NoRegister();
	MYPROJECT3_API UClass* Z_Construct_UClass_ANaveDona();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject3();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ANaveDona::StaticRegisterNativesANaveDona()
	{
	}
	UClass* Z_Construct_UClass_ANaveDona_NoRegister()
	{
		return ANaveDona::StaticClass();
	}
	struct Z_Construct_UClass_ANaveDona_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaDona_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaDona;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscalaPersonalizada_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EscalaPersonalizada;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadGiro_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadGiro;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveDona_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveDona_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveDona.h" },
		{ "ModuleRelativePath", "NaveDona.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveDona_Statics::NewProp_MallaDona_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// Componente visual\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveDona.h" },
		{ "ToolTip", "Componente visual" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveDona_Statics::NewProp_MallaDona = { "MallaDona", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveDona, MallaDona), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveDona_Statics::NewProp_MallaDona_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveDona_Statics::NewProp_MallaDona_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveDona_Statics::NewProp_EscalaPersonalizada_MetaData[] = {
		{ "Category", "Atributos" },
		{ "Comment", "// Atributos de POO (Tama?o y Giro)\n" },
		{ "ModuleRelativePath", "NaveDona.h" },
		{ "ToolTip", "Atributos de POO (Tama?o y Giro)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANaveDona_Statics::NewProp_EscalaPersonalizada = { "EscalaPersonalizada", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveDona, EscalaPersonalizada), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANaveDona_Statics::NewProp_EscalaPersonalizada_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveDona_Statics::NewProp_EscalaPersonalizada_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveDona_Statics::NewProp_VelocidadGiro_MetaData[] = {
		{ "Category", "Atributos" },
		{ "ModuleRelativePath", "NaveDona.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveDona_Statics::NewProp_VelocidadGiro = { "VelocidadGiro", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveDona, VelocidadGiro), METADATA_PARAMS(Z_Construct_UClass_ANaveDona_Statics::NewProp_VelocidadGiro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveDona_Statics::NewProp_VelocidadGiro_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveDona_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveDona_Statics::NewProp_MallaDona,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveDona_Statics::NewProp_EscalaPersonalizada,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveDona_Statics::NewProp_VelocidadGiro,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveDona_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveDona>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveDona_Statics::ClassParams = {
		&ANaveDona::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveDona_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveDona_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveDona_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveDona_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveDona()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveDona_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveDona, 3417067984);
	template<> MYPROJECT3_API UClass* StaticClass<ANaveDona>()
	{
		return ANaveDona::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveDona(Z_Construct_UClass_ANaveDona, &ANaveDona::StaticClass, TEXT("/Script/MyProject3"), TEXT("ANaveDona"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveDona);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
