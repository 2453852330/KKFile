// Fill out your copyright notice in the Description page of Project Settings.


#include "KKFileBlueprintFunctionLibrary.h"

/*************************************** path *************************************/
FString UKKFileBlueprintFunctionLibrary::KK_GetPath(EKKFilePath KKFilePath)
{
	FString tmp;
	switch (KKFilePath)
	{
	case EKKFilePath::EProjectDir:
		tmp = FPaths::ProjectDir();
		break;
	case EKKFilePath::EProjectConfigDir:
		tmp = FPaths::ProjectConfigDir();
		break;
	case EKKFilePath::EProjectSavedDir:
		tmp = FPaths::ProjectSavedDir();
		break;
	case EKKFilePath::EProjectUserDir:
		tmp = FPaths::ProjectUserDir();
		break;
	default:
			break;
	}
	return tmp;
}

FString UKKFileBlueprintFunctionLibrary::KK_CombiePath(const TArray<FString>& PathList)
{
	FString tmp;
	for (FString it : PathList)
	{
		tmp = FPaths::Combine(tmp,it);
	}
	return tmp;
}

bool UKKFileBlueprintFunctionLibrary::KK_FileExists(FString FilePath)
{
	return FPaths::FileExists(FilePath);
}

FString UKKFileBlueprintFunctionLibrary::KK_GetExtension(FString FilePath, bool bIncludeDot)
{
	return FPaths::GetExtension(FilePath,bIncludeDot);
}

FString UKKFileBlueprintFunctionLibrary::KK_GetBaseFileName(FString FilePath, bool bRemovePath)
{
	return FPaths::GetBaseFilename(FilePath,bRemovePath);
}

FString UKKFileBlueprintFunctionLibrary::KK_GetCleanFileName(FString FilePath)
{
	return FPaths::GetCleanFilename(FilePath);
}

/*************************************** file helper *************************************/
/*************************************** load *************************************/
bool UKKFileBlueprintFunctionLibrary::KK_LoadFileToArray(TArray<uint8> & Data , FString FilePath)
{
	return FFileHelper::LoadFileToArray(Data,*FilePath);
}

bool UKKFileBlueprintFunctionLibrary::KK_LoadFileToString(FString& Data, FString FilePath)
{
	return FFileHelper::LoadFileToString(Data,*FilePath);
}

bool UKKFileBlueprintFunctionLibrary::KK_LoadFileToStringArray(TArray<FString>& Data, FString FilePath)
{
	return FFileHelper::LoadFileToStringArray(Data,*FilePath);
}
/*************************************** save *************************************/
bool UKKFileBlueprintFunctionLibrary::KK_SaveArrayToFile(const TArray<uint8>& Data, FString FilePath)
{
	return FFileHelper::SaveArrayToFile(Data,*FilePath);
}

bool UKKFileBlueprintFunctionLibrary::KK_SaveStringToFile(FString Data, FString FilePath)
{
	return FFileHelper::SaveStringToFile(Data,*FilePath);
}

bool UKKFileBlueprintFunctionLibrary::KK_SaveStringArrayToFile(const TArray<FString>& Data, FString FilePath)
{
	return FFileHelper::SaveStringArrayToFile(Data,*FilePath);
}
