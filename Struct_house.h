#pragma once
#include "Struct_flat.h"
#include "Struct_location.h"
#include "Struct_street.h"

struct houses {
	struct flats flat;// ��������
	struct locations location;//������������ ���� 
};

typedef struct houses house; //���

void HouseAdd(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse, int coin, int countRoom, int numFlat, char streetDescription[150], house* reHousePtr);
void House_view(house* reHousePtr);