#pragma once
/// Квартира
struct flats{
	int coin = 0; //цена
	int countRoom = 0; //кол-во комнат
	int numFlat = 0; //Номер квартиры
};


flats Flat(int coin, int countRoom, int numFlat); // Функция ввода через встроенную функцию
flats Flat_console();  // Функция ввода через внешнюю функцию
void FlatViwe(flats flat); // Функция вывода