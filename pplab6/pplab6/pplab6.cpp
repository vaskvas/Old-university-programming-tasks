// pplab6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "reader.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	book a;
	a.set_name("Война и мир");
	a.set_year(1869);
	a.get_info();
	book b;
	b.set_name("Властелин Колец");
	b.set_year(1955);
	b.get_info();
	book c;
	c.set_name("Гарри Поттер и филосовский камень");
	c.set_year(2001);
	c.get_info();

	reader olya, vitya, sasha;
	olya.set_age(18);
	olya.set_fio("Афанасьева Оля Владмировна");
	olya.set_book(b);
	olya.get_info();
	vitya.set_age(19);
	vitya.set_fio("Ларионов Виктор Хамитович");
	vitya.set_book(a);
	vitya.get_info();
	sasha.set_age(20);
	sasha.set_fio("Демидова Александра Ивановна");
	sasha.set_book(c);
	sasha.get_info();

}
