#include "pch.h"
#include <iostream>
#include "book.h"
class reader
{
private:
	std::string fio;
	int age;
	book currentBook;
public:
	void set_fio(const char * new_fio);
	void set_age(const int new_age);
	void set_book(book current);
	void get_info();
};