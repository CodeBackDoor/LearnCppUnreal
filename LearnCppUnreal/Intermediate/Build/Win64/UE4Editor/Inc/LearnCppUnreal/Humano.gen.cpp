// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCppUnreal/Humano.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHumano() {}
// Cross Module References
	LEARNCPPUNREAL_API UClass* Z_Construct_UClass_AHumano_NoRegister();
	LEARNCPPUNREAL_API UClass* Z_Construct_UClass_AHumano();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LearnCppUnreal();
// End Cross Module References
	void AHumano::StaticRegisterNativesAHumano()
	{
	}
	UClass* Z_Construct_UClass_AHumano_NoRegister()
	{
		return AHumano::StaticClass();
	}
	struct Z_Construct_UClass_AHumano_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_edad_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_edad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHumano_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCppUnreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumano_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Humano.h" },
		{ "ModuleRelativePath", "Humano.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumano_Statics::NewProp_edad_MetaData[] = {
		{ "Category", "Humano" },
		{ "ModuleRelativePath", "Humano.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHumano_Statics::NewProp_edad = { UE4CodeGen_Private::EPropertyClass::Int, "edad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(AHumano, edad), METADATA_PARAMS(Z_Construct_UClass_AHumano_Statics::NewProp_edad_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumano_Statics::NewProp_edad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumano_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Humano" },
		{ "ModuleRelativePath", "Humano.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHumano_Statics::NewProp_name = { UE4CodeGen_Private::EPropertyClass::Str, "name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHumano, name), METADATA_PARAMS(Z_Construct_UClass_AHumano_Statics::NewProp_name_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumano_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHumano_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumano_Statics::NewProp_edad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumano_Statics::NewProp_name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHumano_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHumano>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHumano_Statics::ClassParams = {
		&AHumano::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AHumano_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AHumano_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHumano_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHumano_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHumano()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHumano_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHumano, 1253838295);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHumano(Z_Construct_UClass_AHumano, &AHumano::StaticClass, TEXT("/Script/LearnCppUnreal"), TEXT("AHumano"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHumano);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
