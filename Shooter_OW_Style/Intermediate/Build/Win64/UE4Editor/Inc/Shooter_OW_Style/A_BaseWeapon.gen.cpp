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
	SHOOTER_OW_STYLE_API UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace();
	UPackage* Z_Construct_UPackage__Script_Shooter_OW_Style();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	SHOOTER_OW_STYLE_API UClass* Z_Construct_UClass_AA_BaseWeapon_NoRegister();
	SHOOTER_OW_STYLE_API UClass* Z_Construct_UClass_AA_BaseWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SHOOTER_OW_STYLE_API UFunction* Z_Construct_UFunction_AA_BaseWeapon_OnRep_HitScanTrace();
	SHOOTER_OW_STYLE_API UFunction* Z_Construct_UFunction_AA_BaseWeapon_ServerShootFire();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FHitScanTrace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTER_OW_STYLE_API uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitScanTrace, Z_Construct_UPackage__Script_Shooter_OW_Style(), TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitScanTrace(FHitScanTrace::StaticStruct, TEXT("/Script/Shooter_OW_Style"), TEXT("HitScanTrace"), false, nullptr, nullptr);
static struct FScriptStruct_Shooter_OW_Style_StaticRegisterNativesFHitScanTrace
{
	FScriptStruct_Shooter_OW_Style_StaticRegisterNativesFHitScanTrace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HitScanTrace")),new UScriptStruct::TCppStructOps<FHitScanTrace>);
	}
} ScriptStruct_Shooter_OW_Style_StaticRegisterNativesFHitScanTrace;
	struct Z_Construct_UScriptStruct_FHitScanTrace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
		{ "ToolTip", "Contanics information of a single hitscan weapon linetrace" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitScanTrace>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo_MetaData[] = {
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceTo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHitScanTrace, TraceTo), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType = { UE4CodeGen_Private::EPropertyClass::Byte, "SurfaceType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHitScanTrace, SurfaceType), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter_OW_Style,
		nullptr,
		&NewStructOps,
		"HitScanTrace",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FHitScanTrace),
		alignof(FHitScanTrace),
		Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Shooter_OW_Style();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHitScanTrace_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC() { return 1092044512U; }
	static FName NAME_AA_BaseWeapon_ServerShootFire = FName(TEXT("ServerShootFire"));
	void AA_BaseWeapon::ServerShootFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AA_BaseWeapon_ServerShootFire),NULL);
	}
	void AA_BaseWeapon::StaticRegisterNativesAA_BaseWeapon()
	{
		UClass* Class = AA_BaseWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_HitScanTrace", &AA_BaseWeapon::execOnRep_HitScanTrace },
			{ "ServerShootFire", &AA_BaseWeapon::execServerShootFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AA_BaseWeapon_OnRep_HitScanTrace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AA_BaseWeapon_OnRep_HitScanTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AA_BaseWeapon_OnRep_HitScanTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AA_BaseWeapon, "OnRep_HitScanTrace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AA_BaseWeapon_OnRep_HitScanTrace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AA_BaseWeapon_OnRep_HitScanTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AA_BaseWeapon_OnRep_HitScanTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AA_BaseWeapon_OnRep_HitScanTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AA_BaseWeapon_ServerShootFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AA_BaseWeapon_ServerShootFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AA_BaseWeapon_ServerShootFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AA_BaseWeapon, "ServerShootFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AA_BaseWeapon_ServerShootFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AA_BaseWeapon_ServerShootFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AA_BaseWeapon_ServerShootFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AA_BaseWeapon_ServerShootFire_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitScanTrace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitScanTrace;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AA_BaseWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AA_BaseWeapon_OnRep_HitScanTrace, "OnRep_HitScanTrace" }, // 811532297
		{ &Z_Construct_UFunction_AA_BaseWeapon_ServerShootFire, "ServerShootFire" }, // 3546260553
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "A_BaseWeapon.h" },
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_HitScanTrace_MetaData[] = {
		{ "ModuleRelativePath", "Public/A_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_HitScanTrace = { UE4CodeGen_Private::EPropertyClass::Struct, "HitScanTrace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_HitScanTrace", STRUCT_OFFSET(AA_BaseWeapon, HitScanTrace), Z_Construct_UScriptStruct_FHitScanTrace, METADATA_PARAMS(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_HitScanTrace_MetaData, ARRAY_COUNT(Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_HitScanTrace_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BaseWeapon_Statics::NewProp_HitScanTrace,
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
	IMPLEMENT_CLASS(AA_BaseWeapon, 1822286085);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AA_BaseWeapon(Z_Construct_UClass_AA_BaseWeapon, &AA_BaseWeapon::StaticClass, TEXT("/Script/Shooter_OW_Style"), TEXT("AA_BaseWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AA_BaseWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
