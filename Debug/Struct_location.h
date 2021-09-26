#pragma once
//Расположение дома
struct {
	int distanceSchool = 0; //Расстояние до школы
	int distanceHospital = 0;//Расстояние до больници
	int  distanceKindergarten = 0;//Расстояние до детского сада
	char houseStreet[30] = { 0 }; //адрес дома
	int numHouse = 0;
} location;

inline void Location(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse); //Ввод расположения