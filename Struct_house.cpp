#include "Struct_house.h"

inline void House_view()
{
	printf("  �����: %s, ��� %d\n", location.houseStreet, location.numHouse);
	printf("  ����� ��������: %d\n", location.distanceSchool);
	printf("  ���������� �� �����: %d ��\n", location.distanceSchool);
	printf("  ���������� �� ��������: %d ��\n", location.distanceHospital);
	printf("  ���������� �� �������� ����: %d ��\n", location.distanceKindergarten);
	printf("  ���-�� ������: %d\n", flat.countRoom);
	printf("  ����: %d ������\n", flat.coin);
	for (int j = 0; j < 29; j++) {
		if (strcmp(location.houseAdress, street.streetName) == 0) {
			printf("  ���������� � �����: %s\n", street.streetDescription);
		}
	}
}
