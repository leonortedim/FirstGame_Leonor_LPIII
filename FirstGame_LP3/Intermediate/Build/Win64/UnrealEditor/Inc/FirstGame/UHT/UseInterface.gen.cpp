// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/Player/UseInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUseInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	FIRSTGAME_API UClass* Z_Construct_UClass_UUseInterface();
	FIRSTGAME_API UClass* Z_Construct_UClass_UUseInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstGame();
// End Cross Module References
	DEFINE_FUNCTION(IUseInterface::execUseDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseDoor_Implementation();
		P_NATIVE_END;
	}
	void IUseInterface::UseDoor()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UseDoor instead.");
	}
	void UUseInterface::StaticRegisterNativesUUseInterface()
	{
		UClass* Class = UUseInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UseDoor", &IUseInterface::execUseDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUseInterface_UseDoor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUseInterface_UseDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Player/UseInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUseInterface_UseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUseInterface, nullptr, "UseDoor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUseInterface_UseDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUseInterface_UseDoor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUseInterface_UseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUseInterface_UseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUseInterface);
	UClass* Z_Construct_UClass_UUseInterface_NoRegister()
	{
		return UUseInterface::StaticClass();
	}
	struct Z_Construct_UClass_UUseInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUseInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUseInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUseInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUseInterface_UseDoor, "UseDoor" }, // 182510591
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUseInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUseInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Player/UseInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUseInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUseInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUseInterface_Statics::ClassParams = {
		&UUseInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUseInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UUseInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUseInterface()
	{
		if (!Z_Registration_Info_UClass_UUseInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUseInterface.OuterSingleton, Z_Construct_UClass_UUseInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUseInterface.OuterSingleton;
	}
	template<> FIRSTGAME_API UClass* StaticClass<UUseInterface>()
	{
		return UUseInterface::StaticClass();
	}
	UUseInterface::UUseInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUseInterface);
	UUseInterface::~UUseInterface() {}
	static FName NAME_UUseInterface_UseDoor = FName(TEXT("UseDoor"));
	void IUseInterface::Execute_UseDoor(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUseInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UUseInterface_UseDoor);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IUseInterface*)(O->GetNativeInterfaceAddress(UUseInterface::StaticClass())))
		{
			I->UseDoor_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_UseInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_UseInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUseInterface, UUseInterface::StaticClass, TEXT("UUseInterface"), &Z_Registration_Info_UClass_UUseInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUseInterface), 881278902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_UseInterface_h_3396636104(TEXT("/Script/FirstGame"),
		Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_UseInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_UseInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
