// lab9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "time.h"
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
}
