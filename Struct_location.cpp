#define _CRT_SECURE_NO_WARNINGS
#include "Struct_location.h"
#include <iostream>

void Location(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse, location* rePtr)
{
	(*rePtr).distanceSchool = distanceSchool;
	(*rePtr).distanceHospital = distanceHospital;
	(*rePtr).distanceKindergarten = distanceKindergarten;
	(*rePtr).numHouse = numHouse;
	strcat((*rePtr).houseStreet, houseStreet);
}

void LocationViwe(location* rePtr)
{
	printf("  Расстояние до школы: %d\n", (*rePtr).distanceSchool);
	printf("  Расстояние до больницы: %d\n", (*rePtr).distanceHospital);
	printf("  Расстояние до детскогосада: %d\n", (*rePtr).distanceKindergarten);
	printf("  Название улицы: %s\n", (*rePtr).houseStreet);
	printf("  Номер дома: %d\n", (*rePtr).numHouse);
}
