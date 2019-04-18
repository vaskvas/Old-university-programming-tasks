#pragma once
#include "pch.h"

class money {
private:
	int rubley;
	unsigned char kopeek;
public:
	void set(int newRubley, int newKopeek);
	int getRubley() { return rubley; };
	unsigned char getKopeek() { return kopeek; };
	void addMoney(money &someMoney);
	void substractMoney(money &someMoney);
	void print();
};