#pragma once
#include "pch.h"
#include <string>
#include <iostream>

class IdCard
{
private:
	int number;
	std::string dateExpire;
public:
	void setNumber(int newNumber) { number = newNumber; };
	int getNumber() { return number; };
	void setDateExpire(std::string newDateExpire) { dateExpire = newDateExpire; };
	std::string getDateExpire() { return dateExpire; };
	void print() { std::cout << " idCard: " << number << std::endl; };
};