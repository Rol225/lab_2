#pragma once
#include "Struct_flat.h"
#include "Struct_location.h"
#include "Struct_street.h"

__declspec(selectany) struct houses {
	struct flats flat;// Квартира
	struct locations location;//Расположение дома 
}house;

void HouseAdd(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse, int coin, int countRoom, int numFlat, char streetDescription[150]); // Функция ввода через встроенную функцию
void HouseAdd_console(); // Функция ввода через внешнюю функцию
void House_view();  // Функция вывода