// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KKFileType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KKFileBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class KKFILE_API UKKFileBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/*************************************** Path *************************************/
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKFile|Path")
	static FString KK_GetPath(EKKFilePath KKFilePath);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKFile|Path")
	static FString KK_CombiePath(UPARAM(ref) const  TArray<FString> & PathList);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKFile|Path")
	static bool KK_FileExists(FString FilePath);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKFile|Path")
	static FString KK_GetExtension(FString FilePath,bool bIncludeDot);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKFile|Path")
	static FString KK_GetBaseFileName(FString FilePath,bool bRemovePath);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKFile|Path")
	static FString KK_GetCleanFileName(FString FilePath);

	/*************************************** FileHelper *************************************/
	/*************************************** load *************************************/
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKFile|FileHelper")
	static bool KK_LoadFileToArray(TArray<uint8> & Data , FString FilePath);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKFile|FileHelper")
	static bool KK_LoadFileToString(FString & Data,FString FilePath);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKFile|FileHelper")
	static bool KK_LoadFileToStringArray(TArray<FString> & Data,FString FilePath);
	/*************************************** save *************************************/
	UFUNCTION(BlueprintCallable,Category="KKFile|FileHelper")
	static bool KK_SaveArrayToFile(UPARAM(ref) const TArray<uint8> & Data,FString FilePath);
	UFUNCTION(BlueprintCallable,Category="KKFile|FileHelper")
	static bool KK_SaveStringToFile(FString Data,FString FilePath);
	UFUNCTION(BlueprintCallable,Category="KKFile|FileHelper")
	static bool KK_SaveStringArrayToFile(UPARAM(ref) const TArray<FString> & Data,FString FilePath);


	
};
