// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subject_731/TestCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SUBJECT_731_API UClass* Z_Construct_UClass_ATestCharacter();
SUBJECT_731_API UClass* Z_Construct_UClass_ATestCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Subject_731();
// End Cross Module References

// Begin Class ATestCharacter
void ATestCharacter::StaticRegisterNativesATestCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestCharacter);
UClass* Z_Construct_UClass_ATestCharacter_NoRegister()
{
	return ATestCharacter::StaticClass();
}
struct Z_Construct_UClass_ATestCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TestCharacter.h" },
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATestCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Subject_731,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestCharacter_Statics::ClassParams = {
	&ATestCharacter::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestCharacter()
{
	if (!Z_Registration_Info_UClass_ATestCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestCharacter.OuterSingleton, Z_Construct_UClass_ATestCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestCharacter.OuterSingleton;
}
template<> SUBJECT_731_API UClass* StaticClass<ATestCharacter>()
{
	return ATestCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestCharacter);
ATestCharacter::~ATestCharacter() {}
// End Class ATestCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Subject_731_Source_Subject_731_TestCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestCharacter, ATestCharacter::StaticClass, TEXT("ATestCharacter"), &Z_Registration_Info_UClass_ATestCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestCharacter), 3745975916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Subject_731_Source_Subject_731_TestCharacter_h_678703026(TEXT("/Script/Subject_731"),
	Z_CompiledInDeferFile_FID_Subject_731_Source_Subject_731_TestCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Subject_731_Source_Subject_731_TestCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
