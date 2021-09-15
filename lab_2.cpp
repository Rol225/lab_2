#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <windows.h>
#include<string.h>

// Массив структур домов
struct houses {

	//Расположение дома
	struct {
		int distanceSchool = 0; //Расстояние до школы
		int distanceHospital = 0;//Расстояние до больници
		int  distanceKindergarten = 0;//Расстояние до детского сада
		char houseAdress[30] = { 0 }; //адрес дома
		int numHouse = 0;
	} location;


	/// Квартира
	struct {
		int coin = 0; //цена
		int countRoom = 0; //кол-во комнат
		int numFlat = 0; //Номер квартиры
	} flat;

	// Хар-ка дома
	struct {
		int type = 0;  // Тип дома
		int year = 0;  // Год сдачи
	}description;

}House[30];

// Структура описания улицы
struct street {
	char streetName[30] = { 0 };
	char streetDescription[150] = { 0 };

}Street[30];

// Счётчик доступного жилья
struct reference {
	int countHouses = 0;
	int countStreets = 0;
};

typedef struct reference ref; //тип

/// <summary>
/// Функциии объявление
/// </summary>

void start(ref* rePtr); // Автоматическое заполнение структур
void out(int count); // Вывод структур
void outH_1(int i, int mod); // Вывод найденного
void podbor(); //Подбор жилой площади
int Add(int count); //Добавление жилплощади
int Eddit(int count); //Редактирование структуры

/// <summary>
/// Главная функция
/// </summary>
int main()
{
	//Подключение Русского языка
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	ref re;
	ref* rePtr = NULL;
	rePtr = &re;

	start(&re);
	
	int choise = 0;
	int count = 4;

	do {
		
		
		printf("\n\t\tПодбор жилплощади\n");
		printf("\n\n Доступно %d жилья на %d улицах\n\n", re.countHouses, re.countStreets);
		printf("\n  1) Подобрать квартиру\n  2) Показать все возможные варианты\n  3) Добавить жилощадь\n  4) Выход\n  Что вы хотите сделать? ");
		
		while (scanf("%d", &choise) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите число: ");
		}

		if (choise == 1) {
			podbor();
			printf("\nДля продолжения нажмите любую клавишу...");
			_getch();
			system("@cls||clear");
		}
		else if (choise == 2) {
			out(count);
		}
		else if (choise == 3) {
			system("@cls||clear");
			count = Add(count + 1, &re);
			system("@cls||clear");
		}
		else if (choise == 4) {
			printf("\n\nВыход из программы.\n");
		}
		if (choise < 0 || choise >= 5) {
			printf("\nОшибка. Введите число из диапазона от 1 до 4.\n");
		}
	} while (choise != 4);
	
}

/// Автоматическое заполнение структур
void start(ref* rePtr) {

	int r = 0;
	int r_2 = 0;
	const char* street[] = { "Швейцова", "Гоголя", "Лукашенко", "Строительная", "Весимирская", "Некрасова" };
	const char* streetDescription[] = { "Хорошая улица, хорошие дороги, люди добрые", "Плохая улица, много гопников", "Много сильных людей, могут избить", "Дороги разбиты, люди нормальные", "Очень хорошая улица", "Довольно опасная улица" };

	for (int i = 0; i < 5; i++) {
		(*rePtr).countHouses++;
		r = 1 + rand() % 5;
		House[i].location.distanceSchool = 1 + rand() % 10;
		House[i].location.distanceHospital = 1 + rand() % 10;
		House[i].location.distanceKindergarten = 1 + rand() % 10;
		House[i].flat.coin = 1000000 + rand() % 10000000;
		House[i].flat.countRoom = 1 + rand() % 4;
		House[i].flat.numFlat = rand() % 999;

		for (int j = 0; j < 2; j++) {
			r_2 = 1 + rand() % 10;
			House[i].location.numHouse = House[i].location.numHouse * 10 + r_2;
		}

		strcat(House[i].location.houseAdress, street[r]);
	}

	for (int i = 0; i < 6; i++) {
		r = 1 + rand() % 5;
		strcat(Street[i].streetName, street[i]);
		strcat(Street[i].streetDescription, streetDescription[r]);
		(*rePtr).countStreets++;
	}
}

/// Вывод структур
void out(int count) {
	
}

/// Подбор жилплощади
void podbor() {
	
}

/// Вывод найденного
void outH_1(int i, int mod) {
	
	
}

/// Добавление жилплощади
int Add(int count) {
	return count;
 }

/// Изменение жилплощади
int Eddit(int count) {
	return count;
}
