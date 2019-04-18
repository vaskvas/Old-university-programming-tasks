#pragma once
#include "pch.h"
#include <string>
#include <iostream>
#include "spell.h"

class mage {
private:
	int hp, mp;
	std::string name;
public:
	void init(int newHp, int newMp, std::string newName);
	std::string getName();
	void say(std::string text);
	int cast(spell &spl, mage &target);
	void hit(spell &spl);
};