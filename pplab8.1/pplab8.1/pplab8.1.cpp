// pplab8.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "employee.h"

int main()
{

	Department depA, depB;
	depA.setName("DEVELOPMENT"); depB.setName("ADMINISTRATORS");

	IdCard id101, id5016, id5018, id201, id5022, id5019;
	id101.setNumber(101); id5016.setNumber(5016); id5018.setNumber(5018);
	id201.setNumber(201); id5022.setNumber(5022); id5019.setNumber(5019);

	Employee Evgenia, Misha, Alex, Ivan, Petr, Sidor;
	Ivan.name = "Ivan"; Petr.name = "Petr"; Sidor.name = "Sidor";
	Evgenia.name = "Jenya"; Misha.name = "Mike"; Alex.name = "Alex";

	Ivan.setPosition("Chief");
	depA.setHead(&Ivan);

	Misha.setPosition("Director");
	depB.setHead(&Misha);

	Petr.setPosition("Lead developer");
	Sidor.setPosition("developer");
	Ivan.setDepartment(&depA); Ivan.setRoom(101); Ivan.setIdCard(&id101);
	Petr.setDepartment(&depA); Petr.setRoom(102); Petr.setIdCard(&id5016);
	Sidor.setDepartment(&depA); Sidor.setRoom(102); Sidor.setIdCard(&id5018);

	Alex.setPosition("Deputy Director");
	Evgenia.setPosition("Lead accountant");
	Misha.setDepartment(&depB); Misha.setRoom(201); Misha.setIdCard(&id201);
	Alex.setDepartment(&depB); Alex.setRoom(202); Alex.setIdCard(&id5022);
	Evgenia.setDepartment(&depB); Evgenia.setRoom(202); Evgenia.setIdCard(&id5019);
	
	Ivan.print(); Petr.print(); Sidor.print();
	Misha.print();	Alex.print(); Evgenia.print();

	depA.print();
	depB.print();

	system("PAUSE");
	return 0;
}
