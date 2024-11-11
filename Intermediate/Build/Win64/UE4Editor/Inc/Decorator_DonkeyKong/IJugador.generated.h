// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DECORATOR_DONKEYKONG_IJugador_generated_h
#error "IJugador.generated.h already included, missing '#pragma once' in IJugador.h"
#endif
#define DECORATOR_DONKEYKONG_IJugador_generated_h

#define DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_SPARSE_DATA
#define DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_RPC_WRAPPERS
#define DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DECORATOR_DONKEYKONG_API UIJugador(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIJugador) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DECORATOR_DONKEYKONG_API, UIJugador); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIJugador); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DECORATOR_DONKEYKONG_API UIJugador(UIJugador&&); \
	DECORATOR_DONKEYKONG_API UIJugador(const UIJugador&); \
public:


#define DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DECORATOR_DONKEYKONG_API UIJugador(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DECORATOR_DONKEYKONG_API UIJugador(UIJugador&&); \
	DECORATOR_DONKEYKONG_API UIJugador(const UIJugador&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DECORATOR_DONKEYKONG_API, UIJugador); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIJugador); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIJugador)


#define DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIJugador(); \
	friend struct Z_Construct_UClass_UIJugador_Statics; \
public: \
	DECLARE_CLASS(UIJugador, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Decorator_DonkeyKong"), DECORATOR_DONKEYKONG_API) \
	DECLARE_SERIALIZER(UIJugador)


#define DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_GENERATED_UINTERFACE_BODY() \
	DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_GENERATED_UINTERFACE_BODY() \
	DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIJugador() {} \
public: \
	typedef UIJugador UClassType; \
	typedef IIJugador ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIJugador() {} \
public: \
	typedef UIJugador UClassType; \
	typedef IIJugador ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_10_PROLOG
#define DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_SPARSE_DATA \
	DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_RPC_WRAPPERS \
	DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_SPARSE_DATA \
	DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DECORATOR_DONKEYKONG_API UClass* StaticClass<class UIJugador>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DecoratorDK_Source_Decorator_DonkeyKong_IJugador_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
