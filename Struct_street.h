#pragma once
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

// ��������� �������� �����
struct streets {
	char streetName[30] = { 0 };
	char streetDescription[150] = { 0 };

};

streets Street(char streetName[], char streetDescription[]); // ������� ����� ����� ���������� �������
streets Street_console(); // ������� ����� ����� ������� �������
void StreetView(streets street); // ������� ������