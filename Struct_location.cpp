#define _CRT_SECURE_NO_WARNINGS
#include "Struct_location.h"
#include <iostream>

locations Location(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse)
{
	locations location;

	location.houseStreet[0] = 0;
	location.distanceSchool = distanceSchool;
	location.distanceHospital = distanceHospital;
	location.distanceKindergarten = distanceKindergarten;
	location.numHouse = numHouse;
	strcat(location.houseStreet, houseStreet);
	return location;
}

locations Location_console()
{
	int distanceSchool, distanceHospital, distanceKindergarten, numHouse;
	char houseStreet[30];

	locations location;

	location.houseStreet[0] = 0;

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

	printf("����� ����: ");
	while (scanf("%d", &numHouse) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("\n�����: "); scanf("%s", &houseStreet); while (getchar() != '\n');
	
	location.distanceSchool = distanceSchool;
	location.distanceHospital = distanceHospital;
	location.distanceKindergarten = distanceKindergarten;
	location.numHouse = numHouse;
	strcat(location.houseStreet, houseStreet);
	return location;
}

void LocationViwe(locations location)
{
	printf("  ���������� �� �����: %d\n", location.distanceSchool);
	printf("  ���������� �� ��������: %d\n", location.distanceHospital);
	printf("  ���������� �� ������������: %d\n", location.distanceKindergarten);
	printf("  �������� �����: %s\n", location.houseStreet);
	printf("  ����� ����: %d\n", location.numHouse);
}