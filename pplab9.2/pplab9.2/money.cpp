#include "pch.h"
#include "money.h"
#include <iostream>

void money::set(int newRubley, int newKopeek)
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

money money::operator+(money & someMoney)
{
	money result;
	result.rubley = rubley + someMoney.rubley;
	result.kopeek = kopeek - someMoney.kopeek;
	if (result.kopeek >= 100)
	{
		rubley++;
		result.kopeek -= 100;
	}
	return result;
}

money money::operator-(money & someMoney)
{
	money result;
	result.rubley = rubley - someMoney.rubley;
	int pence = kopeek - someMoney.kopeek;
	if (pence < 0) {
		result.rubley--;
		result.kopeek = 100 + pence;
	}
	else
		result.kopeek = pence;
	return result;
}

money money::operator*(const int& someVar)
{
	money result;
	result.rubley = rubley * someVar;
	int pence = kopeek * someVar;
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

void money::print()
{
	std::cout << rubley <<", "<< (int)kopeek<<std::endl;
}
