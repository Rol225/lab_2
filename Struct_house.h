#pragma once
#include "Struct_flat.h"
#include "Struct_location.h"
#include "Struct_street.h"

__declspec(selectany) struct houses {
	struct flats flat;// ��������
	struct locations location;//������������ ���� 
}house;

void HouseAdd(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse, int coin, int countRoom, int numFlat, char streetDescription[150]); // ������� ����� ����� ���������� �������
void HouseAdd_console(); // ������� ����� ����� ������� �������
void House_view();  // ������� ������