#pragma once
/// Квартира
__declspec(selectany) struct flats{
	int coin = 0; //цена
	int countRoom = 0; //кол-во комнат
	int numFlat = 0; //Номер квартиры
}flat;


void Flat(int coin, int countRoom, int numFlat); // Функция ввода через встроенную функцию
void Flat_console();  // Функция ввода через внешнюю функцию
void FlatViwe(); // Функция вывода