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
