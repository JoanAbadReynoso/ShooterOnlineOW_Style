// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter_OW_Style/Public/A_BaseWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_BaseWeapon() {}
// Cross Module References
	SHOOTER_OW_STYLE_API UClass* Z_Construct_UClass_AA_BaseWeapon_NoRegister();
	SHOOTER_OW_STYLE_API UClass* Z_Construct_UClass_AA_BaseWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Shooter_OW_Style();
	SHOOTER_OW_STYLE_API UFunction* Z_Construct_UFunction_AA_BaseWeapon_ShootFire();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AA_BaseWeapon::StaticRegisterNativesAA_BaseWeapon()
	{
		UClass* Class = AA_BaseWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShootFire", &AA_BaseWeapon::execShootFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AA_BaseWeapon_ShootFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AA_BaseWeapon_ShootFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AA_BaseWeapon_ShootFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AA_BaseWeapon, "ShootFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AA_BaseWeapon_ShootFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AA_BaseWeapon_ShootFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AA_BaseWeapon_ShootFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AA_BaseWeapon_ShootFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AA_BaseWeapon_NoRegister()
	{
		return AA_BaseWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AA_BaseWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM_Weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AA_BaseWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter_OW_Style,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AA_BaseWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AA_BaseWeapon_ShootFire, "ShootFire" }, // 1972137055
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "A_BaseWeapon.h" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_SM_Weapon_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_SM_Weapon = { UE4CodeGen_Private::EPropertyClass::Object, "SM_Weapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AA_BaseWeapon, SM_Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_SM_Weapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_SM_Weapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AA_BaseWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_SM_Weapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AA_BaseWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_BaseWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AA_BaseWeapon_Statics::ClassParams = {
		&AA_BaseWeapon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AA_BaseWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AA_BaseWeapon_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AA_BaseWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AA_BaseWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AA_BaseWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AA_BaseWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AA_BaseWeapon, 4254239492);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AA_BaseWeapon(Z_Construct_UClass_AA_BaseWeapon, &AA_BaseWeapon::StaticClass, TEXT("/Script/Shooter_OW_Style"), TEXT("AA_BaseWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AA_BaseWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
