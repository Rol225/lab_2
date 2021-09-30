#pragma once
#include "Struct_flat.h"
#include "Struct_location.h"
#include "Struct_street.h"

struct houses {
	struct flats flat;// Квартира
	struct locations location;//Расположение дома
};

houses HouseAdd(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse, int coin, int countRoom, int numFlat, char streetDescription[150], streets street); // Функция ввода через встроенную функцию
houses HouseAdd_console(streets street); // Функция ввода через внешнюю функцию
void House_view(houses house, streets street);  // Функция вывода