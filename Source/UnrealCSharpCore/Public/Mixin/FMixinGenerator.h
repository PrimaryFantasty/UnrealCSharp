﻿#pragma once

#include "mono/metadata/object-forward.h"

class FMixinGenerator
{
public:
	static UNREALCSHARPCORE_API void Generator();

private:
	static void Generator(MonoClass* InMonoClass);
};
