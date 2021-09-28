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

	printf("Выберите расстояние до школы: ");
	while (scanf("%d", &distanceSchool) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Выберите расстояние до больницы: ");
	while (scanf("%d", &distanceHospital) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Выберите расстояние до детского сада: ");
	while (scanf("%d", &distanceKindergarten) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Номер дома: ");
	while (scanf("%d", &numHouse) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("\nУлица: "); scanf("%s", &houseStreet); while (getchar() != '\n');
	
	location.distanceSchool = distanceSchool;
	location.distanceHospital = distanceHospital;
	location.distanceKindergarten = distanceKindergarten;
	location.numHouse = numHouse;
	strcat(location.houseStreet, houseStreet);
}

void LocationViwe()
{
	printf("  Расстояние до школы: %d\n", location.distanceSchool);
	printf("  Расстояние до больницы: %d\n", location.distanceHospital);
	printf("  Расстояние до детскогосада: %d\n", location.distanceKindergarten);
	printf("  Название улицы: %s\n", location.houseStreet);
	printf("  Номер дома: %d\n", location.numHouse);
}