#pragma once
#include "Struct_flat.h"
#include "Struct_location.h"
#include "Struct_street.h"

struct houses {
	struct flats flat;// ��������
	struct locations location;//������������ ����
};

houses HouseAdd(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse, int coin, int countRoom, int numFlat, char streetDescription[150], streets street); // ������� ����� ����� ���������� �������
houses HouseAdd_console(streets street); // ������� ����� ����� ������� �������
void House_view(houses house, streets street);  // ������� ������