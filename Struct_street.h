#pragma once
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

// ��������� �������� �����
struct streets {
	char streetName[30] = { 0 };
	char streetDescription[150] = { 0 };

};

typedef streets street; //���

void Street(char streetName[], char streetDescription[], street* reStreetPtr);
void StreetView(street* reStreetPtr);