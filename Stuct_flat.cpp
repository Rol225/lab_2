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

	printf("�������� ��������� ��������: ");
	while (scanf("%d", &coin) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("�������� ���-�� ������: ");
	while (scanf("%d", &countRoom) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("����� ��������: ");
	while (scanf("%d", &numFlat) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	flat.coin = coin;
	flat.countRoom = countRoom;
	flat.numFlat = numFlat;

	return flat;
}

void FlatViwe(flats flat)
{
	printf("����: %d\n", flat.coin);
	printf("���������� ������: %d\n", flat.countRoom);
	printf("����� ��������: %d\n", flat.numFlat);
}
