#pragma once
#include "pch.h"

class time
{
private:
	long hours;
	unsigned char minutes;
public:
	void setTime(long newHours, unsigned char newMinutes) { hours = newHours; minutes = newMinutes; };
	long getHours() { return hours; };
	unsigned char getMinutes() { return minutes; };
	time operator+(time& plusTime);
	time operator-(time& plusTime);
	time operator*(const int& plusTime);
	void print();
};