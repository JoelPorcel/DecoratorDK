// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Decorator_DonkeyKong/DecoradorSaltador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoradorSaltador() {}
// Cross Module References
	DECORATOR_DONKEYKONG_API UClass* Z_Construct_UClass_ADecoradorSaltador_NoRegister();
	DECORATOR_DONKEYKONG_API UClass* Z_Construct_UClass_ADecoradorSaltador();
	DECORATOR_DONKEYKONG_API UClass* Z_Construct_UClass_ADecorador();
	UPackage* Z_Construct_UPackage__Script_Decorator_DonkeyKong();
// End Cross Module References
	void ADecoradorSaltador::StaticRegisterNativesADecoradorSaltador()
	{
	}
	UClass* Z_Construct_UClass_ADecoradorSaltador_NoRegister()
	{
		return ADecoradorSaltador::StaticClass();
	}
	struct Z_Construct_UClass_ADecoradorSaltador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecoradorSaltador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADecorador,
		(UObject* (*)())Z_Construct_UPackage__Script_Decorator_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecoradorSaltador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DecoradorSaltador.h" },
		{ "ModuleRelativePath", "DecoradorSaltador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecoradorSaltador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecoradorSaltador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecoradorSaltador_Statics::ClassParams = {
		&ADecoradorSaltador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADecoradorSaltador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADecoradorSaltador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecoradorSaltador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecoradorSaltador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecoradorSaltador, 718125117);
	template<> DECORATOR_DONKEYKONG_API UClass* StaticClass<ADecoradorSaltador>()
	{
		return ADecoradorSaltador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecoradorSaltador(Z_Construct_UClass_ADecoradorSaltador, &ADecoradorSaltador::StaticClass, TEXT("/Script/Decorator_DonkeyKong"), TEXT("ADecoradorSaltador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecoradorSaltador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
