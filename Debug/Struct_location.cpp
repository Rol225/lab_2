#include "Struct_location.h"

inline void Location(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse)
{
	location.distanceSchool = distanceSchool;
	location.distanceHospital = distanceHospital;
	location.distanceKindergarten = distanceKindergarten;
	strcat(location.houseStreet, houseStreet);
	location.numHouse = numHouse;
}
