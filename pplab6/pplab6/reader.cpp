#include "pch.h"
#include <iostream>
#include <string>
#include "reader.h"

void reader::set_fio(const char * new_fio)
{
	this->fio = new_fio;
	return;
}
void reader::set_age(const int new_age)
{
	this->age = new_age;
	return;
}
void reader::set_book(book current)
{
	this->currentBook = current;
	return;
}
void reader::get_info()
{
	std::cout <<"װָ־: "<< this->fio << ", גמחנאסע: " << this->age << " ";
	this->currentBook.get_info();
	return;
}