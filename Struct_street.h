#pragma once
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

// ��������� �������� �����
__declspec(selectany) struct streets {
	char streetName[30] = { 0 };
	char streetDescription[150] = { 0 };

}street;

void Street(char streetName[], char streetDescription[]); // ������� ����� ����� ���������� �������
void Street_console(); // ������� ����� ����� ������� �������
void StreetView(); // ������� ������