#pragma once
/// ��������
struct flats{
	int coin = 0; //����
	int countRoom = 0; //���-�� ������
	int numFlat = 0; //����� ��������
};

typedef struct flats flat; //���

void Flat(int coin, int countRoom, int numFlat, flat* reFlatptr);
void FlatViwe(flat* reFlatptr);