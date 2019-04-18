#include "pch.h"
#include "department.h"
#include <iostream>

void Department::print()
{
	std::cout << " Department: " << name;
	std::cout << " Chief: ";
	head->print();
	std::cout << std::endl;
}
