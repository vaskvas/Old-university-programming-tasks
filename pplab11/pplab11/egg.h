#pragma once

#include "pch.h"
#include <iostream>

#ifdef MAKEDLL
#  define EXPORT __declspec(dllexport)
#else
#  define EXPORT __declspec(dllimport)
#endif

class egg {
public:
	int size;
	int weight;
	EXPORT bool broke(std::string who);
	EXPORT void say(std::string text);
};