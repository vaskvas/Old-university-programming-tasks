#include "pch.h"
#include <iostream>
#include "egg.h"

class animal {
private:
	std::string name;
public:
	void setname(std::string newName);
	std::string getname();
	void say(std::string text);
	void try_break_egg(egg some_egg);
	egg * create_egg();
};