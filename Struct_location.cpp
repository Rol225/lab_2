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
	printf("  ���������� �� �����: %d\n", (*rePtr).distanceSchool);
	printf("  ���������� �� ��������: %d\n", (*rePtr).distanceHospital);
	printf("  ���������� �� ������������: %d\n", (*rePtr).distanceKindergarten);
	printf("  �������� �����: %s\n", (*rePtr).houseStreet);
	printf("  ����� ����: %d\n", (*rePtr).numHouse);
}
