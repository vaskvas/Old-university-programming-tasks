// pplab14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <fstream>
#include "string"

using namespace std;

DWORD WINAPI dz14_dunethread(LPVOID);
DWORD WINAPI dz14_kareninathread(LPVOID);

int word1, word2;
string buffer1, buffer2;

int main()
{
	HANDLE thread[2];

	word1 = 0;
	word2 = 0;

	thread[0] = CreateThread(NULL, 0, dz14_dunethread, NULL, 0, NULL);
	thread[1] = CreateThread(NULL, 0, dz14_kareninathread, NULL, 0, NULL);

	::WaitForMultipleObjects(2, thread, true, NULL);
	cout << " Vsego slov " << word1 << endl;
	cout << " Vsego slov " << word2 << endl;
	cout << " Summa Vsego slov " << word2 + word1 << endl;
	system("PAUSE");
};

DWORD WINAPI dz14_dunethread(LPVOID)
{
	std::ifstream fin1("dz14_dune.txt", std::ios::in | std::ios::_Nocreate);
	while (fin1 >> buffer1) ++word1;
	return 0;
}



DWORD WINAPI dz14_kareninathread(LPVOID)
{
	std::ifstream fin2("dz14_karenina.txt", std::ios::in | std::ios::_Nocreate);
	while (fin2 >> buffer2) ++word2;
	return 0;
}