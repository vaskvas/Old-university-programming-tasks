#include "pch.h"
#include "human.h"
#include <iostream>
#include <string>

class egg;

void human::init(std::string newName, int newAge)
{
	name = newName;
	age = newAge;
}

std::string human::getname()
{
	return name;
}

int human::getage()
{
	return age;
}

void human::say(std::string text)
{
	std::cout << text << std::endl;
}

void human::try_break_egg(egg some_egg)
{
	say("name: " + name);
	if (some_egg.broke(name))
		say("break egg");
	else
		say("don't break egg");
}
