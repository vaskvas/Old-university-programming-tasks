// lab9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "time.h"

const int n = 10;

void printArrayTime(time Array[])
{
	for (int i = 0; i < n; i++)
	{
		Array[i].print();
	}
}

int main()
{
	time one;
	one.setTime(5, 30);
	time two;
	two.setTime(5, 40);
	time three = one + two;
	three.print();
	three = one - two;
	three.print();
	three = one * 3;
	three.print();
	if (one < two)
		std::cout << "one<two = true"<<std::endl;
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

	time array[n];
	for (int i = 0; i < n; i++) {
		array[i].setTime(std::rand() % 25, std::rand() % 60);
	}
	printArrayTime(array);
	std::cout << std::endl;
	time val;
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (array[j] < array[j + 1])
			{
				time temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	printArrayTime(array);
}
