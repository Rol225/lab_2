#pragma once

//������������ ����
__declspec(selectany) struct locations{
	int distanceSchool; //���������� �� �����
	int distanceHospital;//���������� �� ��������
	int  distanceKindergarten;//���������� �� �������� ����
	char houseStreet[30]; //����� ����
	int numHouse;
}location;


void Location(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse); //���� ������������ ���������� �������
void Location_console(); //���� ������������ ���������� ��������
void LocationViwe(); //����� ������������