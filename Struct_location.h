#pragma once

//������������ ����
struct locations{
	int distanceSchool; //���������� �� �����
	int distanceHospital;//���������� �� ��������
	int  distanceKindergarten;//���������� �� �������� ����
	char houseStreet[30]; //����� ����
	int numHouse;
};


locations Location(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse); //���� ������������ ���������� �������
locations Location_console(); //���� ������������ ���������� ��������
void LocationViwe(locations location); //����� ������������