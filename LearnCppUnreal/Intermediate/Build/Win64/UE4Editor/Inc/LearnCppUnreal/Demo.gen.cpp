// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCppUnreal/Demo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemo() {}
// Cross Module References
	LEARNCPPUNREAL_API UClass* Z_Construct_UClass_ADemo_NoRegister();
	LEARNCPPUNREAL_API UClass* Z_Construct_UClass_ADemo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LearnCppUnreal();
// End Cross Module References
	void ADemo::StaticRegisterNativesADemo()
	{
	}
	UClass* Z_Construct_UClass_ADemo_NoRegister()
	{
		return ADemo::StaticClass();
	}
	struct Z_Construct_UClass_ADemo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADemo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCppUnreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Demo.h" },
		{ "ModuleRelativePath", "Demo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADemo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADemo_Statics::ClassParams = {
		&ADemo::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADemo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADemo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADemo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADemo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADemo, 3402077515);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADemo(Z_Construct_UClass_ADemo, &ADemo::StaticClass, TEXT("/Script/LearnCppUnreal"), TEXT("ADemo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADemo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
