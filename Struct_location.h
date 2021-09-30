#pragma once

//Расположение дома
struct locations{
	int distanceSchool; //Расстояние до школы
	int distanceHospital;//Расстояние до больници
	int  distanceKindergarten;//Расстояние до детского сада
	char houseStreet[30]; //адрес дома
	int numHouse;
};


locations Location(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse); //Ввод расположения прикладные функции
locations Location_console(); //Ввод расположения встроенной функцией
void LocationViwe(locations location); //Вывод расположения