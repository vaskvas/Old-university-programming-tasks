#include "pch.h"
#include <iostream>
#include "mage.h"

int main()
{
	mage vanya, boris;
	vanya.init(100, 30, "Vanya");
	boris.init(100, 25, "Boris");

	spell bolt = spell("Bolt", 30, 40), drain = spell("Drain", 50, 20);

	mage thisMage;
	spell* thisSpell;
	bool fightEnd = false;

	thisMage = vanya;
	thisSpell = &bolt;
	while (!fightEnd)
	{
		if (thisMage.getName() == "Vanya")
		{
			if (thisMage.cast(*thisSpell, boris) != 0)
			{
				thisMage = boris;
				if (thisSpell == &bolt)
					thisSpell = &drain;
				else
					thisSpell = &bolt;
			}
			else 
			{
				thisMage.say("i'm lose and can't spell");
				fightEnd = true;
			}
		}
		else
		{
			if (thisMage.cast(*thisSpell, vanya) != 0)
			{
				thisMage = vanya;
			}
			else
			{
				thisMage.say("i'm lose and can't spell");
				fightEnd = true;
			}
		}
	}
	system("PAUSE");
}