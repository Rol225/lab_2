#define _CRT_SECURE_NO_WARNINGS
#include "Struct_street.h"

streets Street(char streetName[], char streetDescription[])
{
	streets street;
	street.streetName[0] = 0;
	street.streetDescription[0] = 0;
	strcat(street.streetName, streetName);
	strcat(street.streetDescription, streetDescription);

	return street;
}

streets Street_console()
{
	streets street;

	char streetName[30] = { 0 };
	char streetDescription[150] = { 0 };

	printf("\n�����: "); scanf("%s", &streetName); while (getchar() != '\n');
	printf("\n�������� �����: "); gets_s(streetDescription, 150);

	street.streetName[0] = 0;
	street.streetDescription[0] = 0;

	strcat(street.streetName, streetName);
	strcat(street.streetDescription, streetDescription);

	return street;
}

void StreetView(streets street)
{
	printf("  �����: %s\n", street.streetName);
	printf("  �������� �����: %s\n", street.streetDescription);
}
