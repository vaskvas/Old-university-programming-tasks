#include "pch.h"
#include <iostream>
#include "money.h"

const int n = 10;

void printArrayTime(money Array[])
{
	for (int i = 0; i < n; i++)
	{
		Array[i].print();
	}
}

int main()
{
	money one;
	one.set(5, 150);
	money two;
	two.set(5, 50);
	money three = one + two;
	three.print();
	three = one - two;
	three.print();
	three = one * 3;
	three.print();
	if (one < two)
		std::cout << "one<two = true" << std::endl;
	else std::cout << "one<two = false" << std::endl;
	if (one <= two)
		std::cout << "one<=two = true" << std::endl;
	else std::cout << "one<=two = false" << std::endl;
	if (one > two)
		std::cout << "one>two = true" << std::endl;
	else std::cout << "one>two = false" << std::endl;
	if (one >= two)
		std::cout << "one>=two = true" << std::endl;
	else std::cout << "one>=two = false" << std::endl;
	if (one == two)
		std::cout << "one==two = true" << std::endl;
	else std::cout << "one==two = false" << std::endl;

	money array[n];
	for (int i = 0; i < n; i++) {
		array[i].set(std::rand() % 100, std::rand() % 100);
	}
	printArrayTime(array);
	std::cout << std::endl;
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (array[j] < array[j + 1])
			{
				money temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	printArrayTime(array);
}
