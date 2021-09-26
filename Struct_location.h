#pragma once

//Расположение дома
struct locations{
	int distanceSchool = 0; //Расстояние до школы
	int distanceHospital = 0;//Расстояние до больници
	int  distanceKindergarten = 0;//Расстояние до детского сада
	char houseStreet[30] = { 0 }; //адрес дома
	int numHouse = 0;
};

typedef struct locations location; //тип

void Location(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse, location* rePtr); //Ввод расположения
void LocationViwe(location* rePtr); //Вывод расположения