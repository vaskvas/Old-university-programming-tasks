#pragma once
#include "pch.h"

class money
{
private:
	int rubley;
	unsigned char kopeek;
public:
	void set(int newRubley, int newKopeek);
	long getRubley() { return rubley; };
	unsigned char getKopeek() { return kopeek; };
	money operator+(money& plusTime);
	money operator-(money& plusTime);
	money operator*(const int& plusTime);
	bool operator<(money& Money);
	bool operator<= (money& Money);
	bool operator>(money& Money);
	bool operator>= (money & Money);
	bool operator==(money& Money);
	void print();
};