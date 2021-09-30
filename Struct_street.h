#pragma once
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

// Структура описания улицы
struct streets {
	char streetName[30] = { 0 };
	char streetDescription[150] = { 0 };

};

streets Street(char streetName[], char streetDescription[]); // Функция ввода через встроенную функцию
streets Street_console(); // Функция ввода через внешнюю функцию
void StreetView(streets street); // Функция вывода