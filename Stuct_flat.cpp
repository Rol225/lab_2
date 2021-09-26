#include "Struct_flat.h"
#include <iostream>

void Flat(int coin, int countRoom, int numFlat, flat* reFlatptr) {
	(*reFlatptr).coin = coin;
	(*reFlatptr).countRoom = countRoom;
	(*reFlatptr).numFlat = numFlat;
}

void FlatViwe(flat* reFlatptr)
{
	printf("Цена: %d\n", (*reFlatptr).coin);
	printf("Количество комнат: %d\n", (*reFlatptr).countRoom);
	printf("Номер квартиры: %d\n", (*reFlatptr).numFlat);
}
