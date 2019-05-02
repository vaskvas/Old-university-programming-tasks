#include "pch.h"
#include <iostream>
#include "egg.h"

class human {
private:
	std::string name;
	int age;
public:
	void init(std::string newName, int newAge);
	std::string getname();
	int getage();
	void say(std::string text);
	void try_break_egg(egg some_egg);
};