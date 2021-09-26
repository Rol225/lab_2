#define _CRT_SECURE_NO_WARNINGS

//#include"lab_2.h"

#include <iostream>
#include <conio.h>
#include <windows.h>
#include<string.h>

#include"Struct_house.h"


int main() {
	//Подключение Русского языка
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int distanceSchool = 0;
	int distanceHospital = 0;
	int distanceKindergarten = 0;
	int coin = 0;
	int numHouse = 0;
	int numFlat = 0;
	int countRoom = 0;
	char houseStreet[30] = { 0 };
	char streetDescription[150] = { 0 };

	house reHouse;
	house* reHousePtr = NULL;
	reHousePtr = &reHouse;

	location reLocation;
	location* rePtr = NULL;
	rePtr = &reLocation;

	flat reFlat;
	flat* reFlatPtr = NULL;
	reFlatPtr = &reFlat;

	street reStreet;
	street* reStreetPtr = NULL;
	reStreetPtr = &reStreet;


	printf(" Заполните информацию:\n");
	

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

	printf("Номер дома: ");
	while (scanf("%d", &numHouse) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Номер квартиры: ");
	while (scanf("%d", &numFlat) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("\nУлица: "); scanf("%s", &houseStreet); while (getchar() != '\n');
	printf("\nОписание улици: ");
	gets_s(streetDescription, 150);
	
	
	printf("\nСтруктура Location ввод и вывод:\n");
	Location(distanceSchool,distanceHospital, distanceKindergarten, houseStreet, numHouse, &reLocation);
	LocationViwe(&reLocation);

	printf("\n\n\n");

	printf("\nСтруктура Flat ввод и вывод:\n");
	Flat(coin, countRoom, numFlat, &reFlat);
	FlatViwe(&reFlat);

	printf("\n\n\n");

	printf("\nСтруктура Street ввод и вывод:\n");
	Street(houseStreet, streetDescription, &reStreet);
	StreetView(&reStreet);

	printf("\n\n\n");

	printf("\nСтруктура House ввод и вывод:\n");
	HouseAdd(distanceSchool, distanceHospital, distanceKindergarten, houseStreet, numHouse, coin, countRoom, numFlat, streetDescription, &reHouse);
	House_view(&reHouse);
}