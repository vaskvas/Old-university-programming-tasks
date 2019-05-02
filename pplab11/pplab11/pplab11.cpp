// pplab11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "human.h"
#include "animal.h"

int main()
{
	animal chicken, mouse;
	
	chicken.setname("chicken");
	auto Egg = chicken.create_egg();

	mouse.setname("mouse");
	human ded, baba;
	ded.init("ded", 65);
	baba.init("baba", 70);

	chicken.try_break_egg(*Egg);
	mouse.try_break_egg(*Egg);
	ded.try_break_egg(*Egg);
	baba.try_break_egg(*Egg);

	system("PAUSE");

}
