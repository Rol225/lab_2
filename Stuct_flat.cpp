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
}

void FlatViwe()
{
	printf("����: %d\n", flat.coin);
	printf("���������� ������: %d\n", flat.countRoom);
	printf("����� ��������: %d\n", flat.numFlat);
}
