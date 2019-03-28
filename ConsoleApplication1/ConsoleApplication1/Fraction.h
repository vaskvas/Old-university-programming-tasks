#pragma once
#include "pch.h"

class Fraction {
private:
	long int first;
	unsigned short int second;
public:
	Fraction();
	Fraction(long int aFirst, unsigned short int aSecond);
	long int get_first() { return first; }
	unsigned short int get_second() { return second; }
	void set_first(long int aFirst);
	void set_second(unsigned short int aSecond);
	void write_fraction();
	const Fraction operator+(const Fraction& rv);
	const Fraction operator-(const Fraction& rv);
	const Fraction operator*(const Fraction& rv);
	const bool operator==(const Fraction& rv);
	const bool operator<(const Fraction& rv);
	const bool operator>(const Fraction& rv);
	const bool operator<=(const Fraction& rv);
	const bool operator>=(const Fraction& rv);
};