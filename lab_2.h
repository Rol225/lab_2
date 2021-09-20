#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>
#include<string.h>

// ������ �������� �����
struct houses {

	//������������ ����
	struct {
		int distanceSchool = 0; //���������� �� �����
		int distanceHospital = 0;//���������� �� ��������
		int  distanceKindergarten = 0;//���������� �� �������� ����
		char houseAdress[30] = { 0 }; //����� ����
		int numHouse = 0;
	} location;


	/// ��������
	struct {
		int coin = 0; //����
		int countRoom = 0; //���-�� ������
		int numFlat = 0; //����� ��������
	} flat;

	// ���-�� ����
	struct {
		int type = 0;  // ��� ����
		int year = 0;  // ��� �����
	}description;

}House[30];

// ��������� �������� �����
struct street {
	char streetName[30] = { 0 };
	char streetDescription[150] = { 0 };

}Street[30];

// ������� ���������� �����
struct reference {
	int countHouses = 0;
	int countStreets = 0;
};

typedef struct reference ref; //���

/// <summary>
/// �������� ����������
/// </summary>
/// 
inline void start(ref* rePtr); // �������������� ���������� ��������
inline void out(int count); // ����� ��������
inline void outH_1(int i, int mod); // ����� ����������
inline void podbor(); //������ ����� �������
inline int Add(int count, ref* rePtr); //���������� ����������
inline int Eddit(int count); //�������������� ���������
