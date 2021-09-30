#define _CRT_SECURE_NO_WARNINGS
#include "Struct_flat.h"
#include <iostream>

flats Flat(int coin, int countRoom, int numFlat) {
	flats flat;
	flat.coin = coin;
	flat.countRoom = countRoom;
	flat.numFlat = numFlat;
	return flat;
}

flats Flat_console()
{
	flats flat;
	int coin, countRoom, numFlat;

	printf("Выберите стоимость квартиры: ");
	while (scanf("%d", &coin) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Выберите кол-во комнат: ");
	while (scanf("%d", &countRoom) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Номер квартиры: ");
	while (scanf("%d", &numFlat) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	flat.coin = coin;
	flat.countRoom = countRoom;
	flat.numFlat = numFlat;

	return flat;
}

void FlatViwe(flats flat)
{
	printf("Цена: %d\n", flat.coin);
	printf("Количество комнат: %d\n", flat.countRoom);
	printf("Номер квартиры: %d\n", flat.numFlat);
}
