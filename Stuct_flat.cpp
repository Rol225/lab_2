#define _CRT_SECURE_NO_WARNINGS
#include "Struct_flat.h"
#include <iostream>

void Flat(int coin, int countRoom, int numFlat) {
	flat.coin = coin;
	flat.countRoom = countRoom;
	flat.numFlat = numFlat;
}

void Flat_console()
{
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
}

void FlatViwe()
{
	printf("Цена: %d\n", flat.coin);
	printf("Количество комнат: %d\n", flat.countRoom);
	printf("Номер квартиры: %d\n", flat.numFlat);
}
