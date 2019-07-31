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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AA_BaseWeapon::StaticRegisterNativesAA_BaseWeapon()
	{
	}
	UClass* Z_Construct_UClass_AA_BaseWeapon_NoRegister()
	{
		return AA_BaseWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AA_BaseWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateOfFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireCameraShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FireCameraShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS_TracerEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PS_TracerEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS_DefaultActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PS_DefaultActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS_ImpactActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PS_ImpactActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS_Muzzle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PS_Muzzle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerTargetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TracerTargetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MuzzleSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "A_BaseWeapon.h" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_RateOfFire = { UE4CodeGen_Private::EPropertyClass::Float, "RateOfFire", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AA_BaseWeapon, RateOfFire), METADATA_PARAMS(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_RateOfFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_RateOfFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_baseDamage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_baseDamage = { UE4CodeGen_Private::EPropertyClass::Float, "baseDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AA_BaseWeapon, baseDamage), METADATA_PARAMS(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_baseDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_baseDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_FireCameraShake_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_FireCameraShake = { UE4CodeGen_Private::EPropertyClass::Class, "FireCameraShake", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(AA_BaseWeapon, FireCameraShake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_FireCameraShake_MetaData, ARRAY_COUNT(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_FireCameraShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_TracerEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_TracerEffect = { UE4CodeGen_Private::EPropertyClass::Object, "PS_TracerEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AA_BaseWeapon, PS_TracerEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_TracerEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_TracerEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_DefaultActor_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_DefaultActor = { UE4CodeGen_Private::EPropertyClass::Object, "PS_DefaultActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AA_BaseWeapon, PS_DefaultActor), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_DefaultActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_DefaultActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_ImpactActor_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_ImpactActor = { UE4CodeGen_Private::EPropertyClass::Object, "PS_ImpactActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AA_BaseWeapon, PS_ImpactActor), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_ImpactActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_ImpactActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_Muzzle_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_Muzzle = { UE4CodeGen_Private::EPropertyClass::Object, "PS_Muzzle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AA_BaseWeapon, PS_Muzzle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_Muzzle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_Muzzle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_TracerTargetName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_TracerTargetName = { UE4CodeGen_Private::EPropertyClass::Name, "TracerTargetName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000030015, 1, nullptr, STRUCT_OFFSET(AA_BaseWeapon, TracerTargetName), METADATA_PARAMS(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_TracerTargetName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_TracerTargetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_MuzzleSocketName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_MuzzleSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "MuzzleSocketName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000030015, 1, nullptr, STRUCT_OFFSET(AA_BaseWeapon, MuzzleSocketName), METADATA_PARAMS(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_MuzzleSocketName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_MuzzleSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Class, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010015, 1, nullptr, STRUCT_OFFSET(AA_BaseWeapon, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_SM_Weapon_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_SM_Weapon = { UE4CodeGen_Private::EPropertyClass::Object, "SM_Weapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AA_BaseWeapon, SM_Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_SM_Weapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_SM_Weapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AA_BaseWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_RateOfFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_baseDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_FireCameraShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_TracerEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_DefaultActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_ImpactActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_PS_Muzzle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_TracerTargetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_MuzzleSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_SM_Weapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AA_BaseWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_BaseWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AA_BaseWeapon_Statics::ClassParams = {
		&AA_BaseWeapon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AA_BaseWeapon, 2045605294);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AA_BaseWeapon(Z_Construct_UClass_AA_BaseWeapon, &AA_BaseWeapon::StaticClass, TEXT("/Script/Shooter_OW_Style"), TEXT("AA_BaseWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AA_BaseWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
