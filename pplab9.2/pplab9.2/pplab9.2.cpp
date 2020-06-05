#include "pch.h"
#include "money.h"
int main()
{
	long rubOne;
	unsigned char kopOne;
	std::cout << "Vvedite pervoe chislo: \nrub:";
	std::cin >> rubOne;
	std::cout << "\nkopeiki:";
	std::cin >> kopOne;
	money one;
	one.set(rubOne, kopOne);

	money two = one + 35.43f;
	two.print();
	two = one - 3.63f;
	two.print();
	two = one * 3.65f;
	two.print();
}
