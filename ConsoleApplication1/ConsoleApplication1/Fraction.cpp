#include "pch.h"
#include <iostream>
#include "Fraction.h"

Fraction::Fraction()
{
	first = 0;
	second = 0;
}

Fraction::Fraction(long int aFirst, unsigned short int aSecond)
{
	first = aFirst;
	second = aSecond;
}

void Fraction::set_first(long int aFirst)
{
	first = aFirst;
}

void Fraction::set_second(unsigned short int aSecond)
{
	second = aSecond;
}

void Fraction::write_fraction()
{
	std::cout << first<< "." << second << std::endl;
}

const Fraction Fraction::operator+(const Fraction & rv)
{
	return Fraction(first + rv.first, second + rv.second);
}

const Fraction Fraction::operator-(const Fraction & rv)
{
	if (second - rv.second < 0) {
		first--;
		return Fraction(first - rv.first, rv.second - second);
	}
	return Fraction(first - rv.first, second - rv.second);
}

const Fraction Fraction::operator*(const Fraction & rv)
{
	
	return Fraction(first + rv.first, second + rv.second);
}

const bool Fraction::operator==(const Fraction & rv)
{
	if (first == rv.first && second == rv.second) {
		return true;
	}
	else
		return false;
}
const bool Fraction::operator<(const Fraction & rv)
{
	if (first < rv.first || first == rv.first && second<rv.second) {
		return true;
	}
	else
		return false;
}
const bool Fraction::operator>(const Fraction & rv)
{
	if (first > rv.first || first == rv.first && second > rv.second) {
		return true;
	}
	else
		return false;
}
const bool Fraction::operator<=(const Fraction & rv)
{
	if ((first < rv.first || first == rv.first) && (second < rv.second || second == rv.second)) {
		return true;
	}
	else
		return false;
}
const bool Fraction::operator>=(const Fraction & rv)
{
	if ((first > rv.first || first == rv.first) && (second > rv.second || second == rv.second)) {
		return true;
	}
	else
		return false;
}
