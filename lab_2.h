#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>
#include<string.h>

// Массив структур домов
struct houses {

	//Расположение дома
	struct {
		int distanceSchool = 0; //Расстояние до школы
		int distanceHospital = 0;//Расстояние до больници
		int  distanceKindergarten = 0;//Расстояние до детского сада
		char houseAdress[30] = { 0 }; //адрес дома
		int numHouse = 0;
	} location;


	/// Квартира
	struct {
		int coin = 0; //цена
		int countRoom = 0; //кол-во комнат
		int numFlat = 0; //Номер квартиры
	} flat;

	// Хар-ка дома
	struct {
		int type = 0;  // Тип дома
		int year = 0;  // Год сдачи
	}description;

}House[30];

// Структура описания улицы
struct street {
	char streetName[30] = { 0 };
	char streetDescription[150] = { 0 };

}Street[30];

// Счётчик доступного жилья
struct reference {
	int countHouses = 0;
	int countStreets = 0;
};

typedef struct reference ref; //тип

/// <summary>
/// Функциии объявление
/// </summary>
/// 
inline void start(ref* rePtr); // Автоматическое заполнение структур
inline void out(int count); // Вывод структур
inline void outH_1(int i, int mod); // Вывод найденного
inline void podbor(); //Подбор жилой площади
inline int Add(int count, ref* rePtr); //Добавление жилплощади
inline int Eddit(int count); //Редактирование структуры
