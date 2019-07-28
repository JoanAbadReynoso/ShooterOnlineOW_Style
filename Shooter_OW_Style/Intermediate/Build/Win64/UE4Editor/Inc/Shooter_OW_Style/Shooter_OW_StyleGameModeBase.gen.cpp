// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter_OW_Style/Shooter_OW_StyleGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooter_OW_StyleGameModeBase() {}
// Cross Module References
	SHOOTER_OW_STYLE_API UClass* Z_Construct_UClass_AShooter_OW_StyleGameModeBase_NoRegister();
	SHOOTER_OW_STYLE_API UClass* Z_Construct_UClass_AShooter_OW_StyleGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Shooter_OW_Style();
// End Cross Module References
	void AShooter_OW_StyleGameModeBase::StaticRegisterNativesAShooter_OW_StyleGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AShooter_OW_StyleGameModeBase_NoRegister()
	{
		return AShooter_OW_StyleGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AShooter_OW_StyleGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooter_OW_StyleGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter_OW_Style,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooter_OW_StyleGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Shooter_OW_StyleGameModeBase.h" },
		{ "ModuleRelativePath", "Shooter_OW_StyleGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooter_OW_StyleGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooter_OW_StyleGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooter_OW_StyleGameModeBase_Statics::ClassParams = {
		&AShooter_OW_StyleGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AShooter_OW_StyleGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AShooter_OW_StyleGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooter_OW_StyleGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooter_OW_StyleGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooter_OW_StyleGameModeBase, 1831523999);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooter_OW_StyleGameModeBase(Z_Construct_UClass_AShooter_OW_StyleGameModeBase, &AShooter_OW_StyleGameModeBase::StaticClass, TEXT("/Script/Shooter_OW_Style"), TEXT("AShooter_OW_StyleGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooter_OW_StyleGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
