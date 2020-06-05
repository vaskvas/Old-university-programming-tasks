#pragma once
#include "pch.h"
#include <iostream>

class money
{
private:
	long rubley;
	unsigned char kopeek;
public:
	long getRubley() { return rubley; };
	unsigned char getKopeek() { return kopeek; };

	void set(long newRubley, int newKopeek)
	{
		rubley = newRubley;
		if (newKopeek > 100) {
			int setKopeek = newKopeek % 100;
			rubley += newKopeek / 100;
			kopeek = setKopeek;
		}
		else
			kopeek = newKopeek;
	}

	money operator+(const float& someMoney)
	{
		money result;
		int rub = (int)someMoney;
		result.rubley = rubley + rub;
		result.kopeek = kopeek + (someMoney - rub) * 100.f;
		if (result.kopeek >= 100)
		{
			rubley++;
			result.kopeek -= 100;
		}
		return result;
	}

	money operator-(const float& someMoney)
	{
		money result;
		int rub = (int)someMoney;
		result.rubley = rubley - rub;
		int pence = kopeek - (someMoney - rub) * 100.f;
		if (pence < 0) {
			result.rubley--;
			result.kopeek = 100 + pence;
		}
		else
			result.kopeek = pence;
		return result;
	}

	money operator*(const float& someVar)
	{
		money result;
		result.rubley = (long)((float)rubley * someVar);
		int pence = (int)((float)kopeek * someVar);
		if (pence >= 100) {
			int addKopeek = pence % 100;
			int addRubley = pence / 100;
			result.rubley += addRubley;
			result.kopeek = addKopeek;
		}
		else
			result.kopeek = pence;
		return result;
	}

	void print()
	{
		std::cout << rubley << ", " << (int)kopeek << std::endl;
	}
};