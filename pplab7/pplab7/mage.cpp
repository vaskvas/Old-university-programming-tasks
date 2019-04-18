#include "pch.h"
#include "mage.h"

void mage::init(int newHp, int newMp, std::string newName)
{
	hp = newHp;
	mp = newMp;
	name = newName;
}

std::string mage::getName()
{
	return name;
}

void mage::say(std::string text)
{
	std::cout << name << " saying " << text << std::endl;
}

int mage::cast(spell & spl, mage & target)
{
	if (hp > 0) {
		std::cout << name << " hit " << target.getName()<< " enemy " << spl.name << std::endl;
		target.hit(spl);
		return -1;
	}
	else {
		return 0;
	}

}

void mage::hit(spell & spl)
{
	hp -= spl.dhp;
	if (hp < 0)
		say(" i am lose ");
}
