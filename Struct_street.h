#pragma once

// Структура описания улицы
struct street {
	char streetName[30] = { 0 };
	char streetDescription[150] = { 0 };

}street;

inline void Street(char streetName[], char streetDescription[]);