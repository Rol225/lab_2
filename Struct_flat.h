#pragma once
/// ��������
__declspec(selectany) struct flats{
	int coin = 0; //����
	int countRoom = 0; //���-�� ������
	int numFlat = 0; //����� ��������
}flat;


void Flat(int coin, int countRoom, int numFlat); // ������� ����� ����� ���������� �������
void Flat_console();  // ������� ����� ����� ������� �������
void FlatViwe(); // ������� ������