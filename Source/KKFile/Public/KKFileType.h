#pragma once

#include "KKFileType.generated.h"


UENUM()
enum class EKKFilePath : uint8
{
	EProjectDir,
	EProjectConfigDir,
	EProjectSavedDir,
	EProjectUserDir,
	EMax
};

USTRUCT(BlueprintType)
struct FKKCsvDataLine
{
	GENERATED_USTRUCT_BODY()
	FString Data;
	FKKCsvDataLine(FString InData):Data(InData){}
	FKKCsvDataLine(){}
};
