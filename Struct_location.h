#pragma once

//������������ ����
struct locations{
	int distanceSchool = 0; //���������� �� �����
	int distanceHospital = 0;//���������� �� ��������
	int  distanceKindergarten = 0;//���������� �� �������� ����
	char houseStreet[30] = { 0 }; //����� ����
	int numHouse = 0;
};

typedef struct locations location; //���

void Location(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse, location* rePtr); //���� ������������
void LocationViwe(location* rePtr); //����� ������������