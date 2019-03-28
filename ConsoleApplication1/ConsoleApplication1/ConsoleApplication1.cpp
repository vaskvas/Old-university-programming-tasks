// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "Fraction.h"

int main()
{
	Fraction a;
	Fraction b;
	long int first;
	unsigned short int second;
	std::cout << "\nCelaya chast a : ";
	std::cin >> first;
	std::cout << "Drobnaya chast a : ";
	std::cin >> second;
	a = Fraction(first, second);
	std::cout << "\nCelaya chast b : ";
	std::cin >> first;
	std::cout << "Drobnaya chast b : ";
	std::cin >> second;
	b = Fraction(first, second);
	Fraction c;
	c = a + b;
	c.write_fraction();
	c = a - b;
	c.write_fraction();
	c = a * b;
	c.write_fraction();
	if (a == b)
	{
		std::cout << "a == b" << std::endl;
	}
	if (a <= b)
	{
		std::cout << "a <= b" << std::endl;
	}
	if (a >= b)
	{
		std::cout << "a >= b" << std::endl;
	}
	if (a < b)
	{
		std::cout << "a < b" << std::endl;
	}
	if (a > b)
	{
		std::cout << "a > b" << std::endl;
	}

	system("PAUSE");
}