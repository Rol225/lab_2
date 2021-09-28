#pragma once
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

// Структура описания улицы
__declspec(selectany) struct streets {
	char streetName[30] = { 0 };
	char streetDescription[150] = { 0 };

}street;

void Street(char streetName[], char streetDescription[]); // Функция ввода через встроенную функцию
void Street_console(); // Функция ввода через внешнюю функцию
void StreetView(); // Функция вывода