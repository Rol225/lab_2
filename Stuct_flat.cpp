#include "Struct_flat.h"
#include <iostream>

void Flat(int coin, int countRoom, int numFlat, flat* reFlatptr) {
	(*reFlatptr).coin = coin;
	(*reFlatptr).countRoom = countRoom;
	(*reFlatptr).numFlat = numFlat;
}

void FlatViwe(flat* reFlatptr)
{
	printf("����: %d\n", (*reFlatptr).coin);
	printf("���������� ������: %d\n", (*reFlatptr).countRoom);
	printf("����� ��������: %d\n", (*reFlatptr).numFlat);
}
