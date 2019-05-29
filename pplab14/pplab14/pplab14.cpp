// pplab14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <fstream>
#include "string"

//1 пункт
DWORD WINAPI thread1(LPVOID);
DWORD WINAPI thread2(LPVOID);
DWORD WINAPI thread3(LPVOID);
DWORD WINAPI thread4(LPVOID);
int i = -1;
volatile int j = -1;

//2 пункт
DWORD WINAPI Voicethread(LPVOID);
const int cities = 5;
const int cityResidents = 500;
int city[cities][cityResidents];
void results() {
	int candidats[3]{0,0,0};
	for(int i = 0;i<cities;i++ )
	for (int j = 0; j < cityResidents; j++)
		candidats[city[i][j]]++;
	std::cout << "\nResults:";
	for (int i = 0; i < 3; i++)
		std::cout << "\nCandidat " << i+1 << " : " << candidats[i];
}

//Домашнее задание
DWORD WINAPI threadReadFile(LPVOID);
int words[2]{0,0};
int sheWords[2]{ 0,0 };
std::string files[2]{ "dz14_dune.txt","dz14_karenina.txt" };


int main()
{
	HANDLE threadsVolInt[2];
	HANDLE threadsInt[2];
	//1 пункт
	threadsVolInt[0]= CreateThread(NULL, 0, thread1, NULL, 0, NULL);
	threadsVolInt[1] = CreateThread(NULL, 0, thread2, NULL, 0, NULL);
	::WaitForMultipleObjects(2, threadsVolInt, true, INFINITE);
	threadsInt[0] = CreateThread(NULL, 0, thread3, NULL, 0, NULL);
	threadsInt[1] = CreateThread(NULL, 0, thread4, NULL, 0, NULL);
	::WaitForMultipleObjects(2, threadsInt, true, INFINITE);
	//2 пункт
	HANDLE threadsCityVoices[cities];
	for(int i = 0; i<cities;i++)
		threadsCityVoices[i] = CreateThread(NULL, 0, Voicethread, (LPVOID)i, 0, NULL);
	::WaitForMultipleObjects(cities, threadsCityVoices, true, INFINITE);
	results();
	//Домашнее задание
	HANDLE threadsReadFiles[2];
	for (int i = 0; i < 2; i++)
		threadsReadFiles[i] = CreateThread(NULL, 0, threadReadFile, (LPVOID)i, 0, NULL);
	system("PAUSE");
	return 0;
}

DWORD WINAPI thread1(LPVOID t)
{
	j = 1;
	std::cout << "\nThread one: " << j;
	return 0;
}

DWORD WINAPI thread2(LPVOID t)
{
	std::cout << "\nThread two: "<< j;
	return 0;
}

DWORD WINAPI thread3(LPVOID t)
{
	i = 1;
	std::cout << "\nThread three: " << i;
	return 0;
}

DWORD WINAPI thread4(LPVOID t)
{
	std::cout << "\nThread four: " << i;
	return 0;
}

void cityResults(int idCity, int aCity[]) {
	int candidats[3]{ 0,0,0 };
	for (int i = 0; i < 3; i++)
		candidats[i] = 0;
	for (int i = 0; i < cityResidents; i++)
		candidats[aCity[i]]++;

	std::cout << "\nResults " << idCity+1 <<"City:";
	for (int i = 0; i < 3; i++)
		std::cout << "\nCandidat " << i+1 << " : "<<candidats[i];

}

DWORD WINAPI Voicethread(LPVOID t)
{
	for (int i = 0; i < cityResidents; i++)
		city[(int)t][i] = rand() % 3;
	cityResults((int)t, city[(int)t]);
	return 0;
}

DWORD WINAPI threadReadFile(LPVOID t)
{
	std::ifstream fRead(files[(int)t], std::ios::in | std::ios::_Nocreate);
	std::string buff;
	while (fRead >> buff) {
	words[(int)t]++;
	if (buff == "She" || buff == "she")
		sheWords[(int)t]++;
	}
	std::cout << "\n File " << files[(int)t] << " words: " << words[(int)t] <<
	", she words:" << sheWords[(int)t];
	return 0;
}