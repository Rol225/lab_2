#pragma once
/// ��������
struct flats{
	int coin = 0; //����
	int countRoom = 0; //���-�� ������
	int numFlat = 0; //����� ��������
};


flats Flat(int coin, int countRoom, int numFlat); // ������� ����� ����� ���������� �������
flats Flat_console();  // ������� ����� ����� ������� �������
void FlatViwe(flats flat); // ������� ������