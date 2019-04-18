#pragma once
#include "pch.h"
#include <string>
#include "employee.h"

class Employee;

class Department
{
private:
	std::string name;
	Employee* head;
public:
	void setName(std::string newName) { name = newName; };
	std::string getName() { return name; };
	void setHead(Employee* newHead) { head = newHead; };
	Employee* getHead() { return head; };
	void print();
};