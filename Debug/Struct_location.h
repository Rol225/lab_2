#pragma once
//������������ ����
struct {
	int distanceSchool = 0; //���������� �� �����
	int distanceHospital = 0;//���������� �� ��������
	int  distanceKindergarten = 0;//���������� �� �������� ����
	char houseStreet[30] = { 0 }; //����� ����
	int numHouse = 0;
} location;

inline void Location(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse); //���� ������������