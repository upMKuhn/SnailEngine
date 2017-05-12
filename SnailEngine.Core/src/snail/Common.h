#pragma once
#include <assert.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <stdexcept>


#ifdef SNAILENGINECORE_EXPORTS
	#define SN_API __declspec(dllexport)
#else
	#define SN_API __declspec(dllimport)
#endif // SNAILENGINECORE_EXPORTS


