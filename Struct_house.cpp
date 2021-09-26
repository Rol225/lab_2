#define _CRT_SECURE_NO_WARNINGS
#include "Struct_house.h"
#include "Struct_flat.h"
#include "Struct_location.h"
#include "Struct_street.h"

void HouseAdd(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse, int coin, int countRoom, int numFlat, char streetDescription[150], house* reHousePtr)
{
	street st;
	street* stPtr = &st;

	(*reHousePtr).location.distanceSchool = distanceSchool;
	(*reHousePtr).location.distanceHospital = distanceHospital;
	(*reHousePtr).location.distanceKindergarten = distanceKindergarten;
	(*reHousePtr).location.numHouse = numHouse;
	strcat((*reHousePtr).location.houseStreet, houseStreet);
	(*reHousePtr).flat.coin = coin;
	(*reHousePtr).flat.countRoom = countRoom;
	(*reHousePtr).flat.numFlat = numFlat;
	if (strcmp((*reHousePtr).location.houseStreet, st.streetName) == 0) {
		strcat(st.streetName, (*reHousePtr).location.houseStreet);
		strcat(st.streetDescription, streetDescription);
	}
}

void House_view(house* reHousePtr)
{

	street st;
	street* stPtr = &st;
	printf("  �����: %s, ��� %d\n", (*reHousePtr).location.houseStreet, (*reHousePtr).location.numHouse);
	printf("  ����� ��������: %d\n", (*reHousePtr).location.distanceSchool);
	printf("  ���������� �� �����: %d ��\n", (*reHousePtr).location.distanceSchool);
	printf("  ���������� �� ��������: %d ��\n", (*reHousePtr).location.distanceHospital);
	printf("  ���������� �� �������� ����: %d ��\n", (*reHousePtr).location.distanceKindergarten);
	printf("  ���-�� ������: %d\n", (*reHousePtr).flat.countRoom);
	printf("  ����: %d ������\n", (*reHousePtr).flat.coin);
	for (int j = 0; j < 29; j++) {
		if (strcmp((*reHousePtr).location.houseStreet, st.streetName) == 0) {
			printf("  ���������� � �����: %s\n", st.streetDescription);
		}
	}
}
