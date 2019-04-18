// plab8.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "money.h"

int main()
{
	money a, b;
	a.set(10, 150);
	b.set(20, 50);
	a.addMoney(b);
	a.print();
	a.set(21, 0);
	a.substractMoney(b);
	a.print();
}