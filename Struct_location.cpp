#define _CRT_SECURE_NO_WARNINGS
#include "Struct_location.h"
#include <iostream>

void Location(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse)
{
	location.houseStreet[0] = 0;
	location.distanceSchool = distanceSchool;
	location.distanceHospital = distanceHospital;
	location.distanceKindergarten = distanceKindergarten;
	location.numHouse = numHouse;
	strcat(location.houseStreet, houseStreet);
}

void Location_console()
{
	int distanceSchool, distanceHospital, distanceKindergarten, numHouse;
	char houseStreet[30];

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
}

void LocationViwe()
{
	printf("  ���������� �� �����: %d\n", location.distanceSchool);
	printf("  ���������� �� ��������: %d\n", location.distanceHospital);
	printf("  ���������� �� ������������: %d\n", location.distanceKindergarten);
	printf("  �������� �����: %s\n", location.houseStreet);
	printf("  ����� ����: %d\n", location.numHouse);
}