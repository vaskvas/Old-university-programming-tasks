#pragma once
#include "pch.h"
#include <string>
#include "department.h"
#include "idCard.h"

class Department;

class Employee
{
private:
	std::string position;
	IdCard* card;
	int room;
	Department* departament;
public:
	std::string name;
	void setPosition(std::string newPosition) { position = newPosition; };
	std::string getPosition() { return position; };
	void setIdCard(IdCard* newIdCard) { card = newIdCard; };
	IdCard* getIdCard() { return card; };
	void setRoom(int newRoom) { room = newRoom; };
	int getRoom() { return room; };
	void setDepartment(Department* newDepartment) { departament = newDepartment; };
	Department* getDepartment() { return departament; };
	void print();

};