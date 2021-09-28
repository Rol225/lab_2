#define _CRT_SECURE_NO_WARNINGS
#include "Struct_house.h"
#include "Struct_flat.h"
#include "Struct_location.h"
#include "Struct_street.h"

void HouseAdd(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse, int coin, int countRoom, int numFlat, char streetDescription[150])
{
	street.streetName[0] = 0;
	street.streetDescription[0] = 0;

	house.location.distanceSchool = distanceSchool;
	house.location.distanceHospital = distanceHospital;
	house.location.distanceKindergarten = distanceKindergarten;
	house.location.numHouse = numHouse;
	strcat(house.location.houseStreet, houseStreet);
	house.flat.coin = coin;
	house.flat.countRoom = countRoom;
	house.flat.numFlat = numFlat;
	if (strcmp(house.location.houseStreet, street.streetName) != 0) {
		strcat(street.streetName, house.location.houseStreet);
		strcat(street.streetDescription, streetDescription);
	}
}

void HouseAdd_console()
{
	int distanceSchool, distanceHospital, distanceKindergarten, numHouse, coin, countRoom, numFlat;
	char streetDescription[150];
	char houseStreet[30];

	street.streetName[0] = 0;
	street.streetDescription[0] = 0;

	printf("�������� ���������� �� �����: ");
	while (scanf("%d", &distanceSchool) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("�������� ���������� �� ��������: ");
	while (scanf("%d", &distanceHospital) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("�������� ���������� �� �������� ����: ");
	while (scanf("%d", &distanceKindergarten) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

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

	printf("����� ����: ");
	while (scanf("%d", &numHouse) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("����� ��������: ");
	while (scanf("%d", &numFlat) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("\n�����: "); scanf("%s", &houseStreet); while (getchar() != '\n');
	printf("\n�������� �����: "); gets_s(streetDescription, 150);

	house.location.distanceSchool = distanceSchool;
	house.location.distanceHospital = distanceHospital;
	house.location.distanceKindergarten = distanceKindergarten;
	house.location.numHouse = numHouse;
	strcat(house.location.houseStreet, houseStreet);
	house.flat.coin = coin;
	house.flat.countRoom = countRoom;
	house.flat.numFlat = numFlat;
	if (strcmp(house.location.houseStreet, street.streetName) != 0) {
		strcat(street.streetName, house.location.houseStreet);
		strcat(street.streetDescription, streetDescription);
	}

}

void House_view()
{
	int test = 0;
	printf("  �����: %s, ��� %d\n", house.location.houseStreet, house.location.numHouse);
	printf("  ����� ��������: %d\n", house.location.distanceSchool);
	printf("  ���������� �� �����: %d ��\n", house.location.distanceSchool);
	printf("  ���������� �� ��������: %d ��\n", house.location.distanceHospital);
	printf("  ���������� �� �������� ����: %d ��\n", house.location.distanceKindergarten);
	printf("  ���-�� ������: %d\n", house.flat.countRoom);
	printf("  ����: %d ������\n", house.flat.coin);
	for (int j = 0; j < 29; j++) {
		if (strcmp(house.location.houseStreet, street.streetName) == 0) {
			test = 1;
		}
	}
	if (test == 1) {
		printf("  ���������� � �����: %s\n", street.streetDescription);
	}
}
