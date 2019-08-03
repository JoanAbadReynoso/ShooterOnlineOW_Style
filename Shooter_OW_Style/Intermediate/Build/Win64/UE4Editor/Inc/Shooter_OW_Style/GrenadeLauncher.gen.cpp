// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter_OW_Style/Public/GrenadeLauncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrenadeLauncher() {}
// Cross Module References
	SHOOTER_OW_STYLE_API UClass* Z_Construct_UClass_AGrenadeLauncher_NoRegister();
	SHOOTER_OW_STYLE_API UClass* Z_Construct_UClass_AGrenadeLauncher();
	SHOOTER_OW_STYLE_API UClass* Z_Construct_UClass_AA_BaseWeapon();
	UPackage* Z_Construct_UPackage__Script_Shooter_OW_Style();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AGrenadeLauncher::StaticRegisterNativesAGrenadeLauncher()
	{
	}
	UClass* Z_Construct_UClass_AGrenadeLauncher_NoRegister()
	{
		return AGrenadeLauncher::StaticClass();
	}
	struct Z_Construct_UClass_AGrenadeLauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrenadeLauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AA_BaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter_OW_Style,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenadeLauncher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GrenadeLauncher.h" },
		{ "ModuleRelativePath", "Public/GrenadeLauncher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenadeLauncher_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "ProjectileWeapon" },
		{ "ModuleRelativePath", "Public/GrenadeLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGrenadeLauncher_Statics::NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(AGrenadeLauncher, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGrenadeLauncher_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGrenadeLauncher_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrenadeLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenadeLauncher_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrenadeLauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrenadeLauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrenadeLauncher_Statics::ClassParams = {
		&AGrenadeLauncher::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AGrenadeLauncher_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AGrenadeLauncher_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGrenadeLauncher_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGrenadeLauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrenadeLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrenadeLauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrenadeLauncher, 2883521188);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrenadeLauncher(Z_Construct_UClass_AGrenadeLauncher, &AGrenadeLauncher::StaticClass, TEXT("/Script/Shooter_OW_Style"), TEXT("AGrenadeLauncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrenadeLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
