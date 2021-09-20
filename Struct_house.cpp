#include "Struct_house.h"

inline void House_view()
{
	printf("  Адрес: %s, дом %d\n", location.houseStreet, location.numHouse);
	printf("  Номер квартиры: %d\n", location.distanceSchool);
	printf("  Расстояние до школы: %d км\n", location.distanceSchool);
	printf("  Расстояние до больницы: %d км\n", location.distanceHospital);
	printf("  Расстояние до детского сада: %d км\n", location.distanceKindergarten);
	printf("  Кол-во комнат: %d\n", flat.countRoom);
	printf("  Цена: %d рублей\n", flat.coin);
	for (int j = 0; j < 29; j++) {
		if (strcmp(location.houseAdress, street.streetName) == 0) {
			printf("  Информация о улице: %s\n", street.streetDescription);
		}
	}
}
