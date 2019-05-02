// egg.cpp : Определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include "egg.h"
#include <iostream>
#include <string>

bool egg::broke(std::string who)
{
	say(who + " try to break to me!");
	if(who!="mouse")
		return false;
	else return true;
}

void egg::say(std::string text)
{
	std::cout << text << std::endl;
}
