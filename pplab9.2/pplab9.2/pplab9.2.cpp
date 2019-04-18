#include "pch.h"
#include <iostream>
#include "money.h"
int main()
{
	money one;
	one.set(5, 150);
	money two;
	two.set(5, 50);
	money three = one + two;
	three.print();
	three = one - two;
	three.print();
	three = one * 3;
	three.print();
}
