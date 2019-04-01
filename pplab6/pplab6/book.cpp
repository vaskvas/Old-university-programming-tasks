#include "pch.h"
#include <iostream>
#include <string>
#include "book.h"

void book::set_name(const char * new_name)
{
	this->name = new_name;
	return;
}
void book::set_year(const int new_year)
{
	this->year = new_year;
	return;
}
void book::get_info()
{
	std::cout << this->name << "(" << this->year << ")"<<std::endl;
	return;
}