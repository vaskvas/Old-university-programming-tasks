#include "pch.h"
#include "time.h"
#include <iostream>

time time::operator+(time & plusTime)
{
	time result;
	result.hours = hours + plusTime.hours;
	if (minutes + plusTime.minutes >= 60)
	{
		result.hours++;
		result.minutes = plusTime.minutes + minutes - 60;
	}	
	return result;
}

time time::operator-(time & plusTime)
{
	time result;
	result.hours = hours - plusTime.hours;
	int minut = minutes - plusTime.minutes;
	if (minut < 0)
	{
		result.hours--;
		result.minutes = 60 + minut;
	}
	else
		result.minutes = minut;
	return result;
}

time time::operator*(const int& plusTime)
{
	time result;
	result.hours = hours * plusTime;
	int minut = minutes * plusTime;
	if (minut > 60) {
		int addMinutes = minut % 60;
		int addHours = minut / 60;
		result.hours += addHours;
		result.minutes = addMinutes;
	}
	else
		result.minutes = minut;
	return result;
}

bool time::operator<(time & Time)
{
	if (hours <= Time.hours)
	{
		if(minutes < Time.minutes)
			return true;
		else return false;
	}
	else return false;
}

bool time::operator<=(time & Time)
{
	if (hours <= Time.hours && minutes <= Time.minutes)
	{
		return true;
	}
	else return false;
}

bool time::operator>(time & Time)
{
	if (hours >= Time.hours)
	{
		if (minutes > Time.minutes)
			return true;
		else return false;
	}
	else return false;
}

bool time::operator>=(time & Time)
{
	if (hours >= Time.hours && minutes >= Time.minutes)
	{
		return true;
	}
	else return false;
}

bool time::operator==(time & Time)
{
	if (hours == Time.hours && minutes == Time.minutes)
	{
		return true;
	}
	else return false;
}

void time::print()
{
	std::cout << hours <<":"<< (int)minutes<<std::endl;
}
