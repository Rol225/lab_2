#define _CRT_SECURE_NO_WARNINGS
#include "Struct_street.h"

void Street(char streetName[], char streetDescription[], street* reStreetPtr)
{
	strcat((*reStreetPtr).streetName, streetName);
	strcat((*reStreetPtr).streetDescription, streetDescription);
}

void StreetView(street* reStreetPtr)
{
	printf("  Улица: %s\n", (*reStreetPtr).streetName);
	printf("  Описание улицы: %s\n", (*reStreetPtr).streetDescription);
}
