#pragma once
/// Квартира
struct flats{
	int coin = 0; //цена
	int countRoom = 0; //кол-во комнат
	int numFlat = 0; //Номер квартиры
};

typedef struct flats flat; //тип

void Flat(int coin, int countRoom, int numFlat, flat* reFlatptr);
void FlatViwe(flat* reFlatptr);