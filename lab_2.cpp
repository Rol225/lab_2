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
int Add(int count, ref* rePtr); //Добавление жилплощади
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
	int choise = 0;
	char numHouse[4];

	printf("\n\t\tДоступные варианты\n");
	for (int i = 0; i < count + 1; i++) {
		snprintf(numHouse, 4, "%d", House[i].location.numHouse);
		printf("\n№ %d", i + 1);
		printf("\nАдрес дома: ул. %s д. %s\n", House[i].location.houseAdress, numHouse);
		printf("  Номер квартиры: %d\n", House[i].flat.numFlat);
		printf("  Расстояние до школы: %d км\n", House[i].location.distanceSchool);
		printf("  Расстояние до больницы: %d км\n", House[i].location.distanceHospital);
		printf("  Расстояние до детского сада: %d км\n", House[i].location.distanceKindergarten);
		printf("  Кол-во комнат: %d\n", House[i].flat.countRoom);
		printf("  Цена: %d рублей\n", House[i].flat.coin);
		for (int j = 0; j < 29; j++) {
			if (strcmp(House[i].location.houseAdress, Street[j].streetName) == 0) {
				printf("  Информация о улице: %s\n", Street[j].streetDescription);
			}
		}

	}
	printf("\n  1) Редактировать запись\n  2) В главное меню\n  Что вы хотите сделать? ");
	while (scanf("%d", &choise) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	if (choise == 1) {
		printf("\n  Введите номер для редактирования записи: ");
		do {
			while (scanf("%d", &choise) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}
		} while (choise < 1 || choise > count);

		Eddit(choise - 1);
	}
}

/// Подбор жилплощади
void podbor() {
	int max_distanceSchool = 0;
	int max_distanceHospital = 0;
	int max_distanceKindergarten = 0;
	int max_coin = 0;
	int countRoom = 0;
	int search = 0;

	printf("Выберите максимальое расстояние до школы (0 если не важно): ");
	while (scanf("%d", &max_distanceSchool) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Выберите максимальое расстояние до больницы (0 если не важно): ");
	while (scanf("%d", &max_distanceHospital) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Выберите максимальое расстояние до детского сада (0 если не важно): ");
	while (scanf("%d", &max_distanceKindergarten) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Выберите максимальую стоимость квартиры (0 если не важно): ");
	while (scanf("%d", &max_coin) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Выберите кол-во комнат (0 если не важно): ");
	while (scanf("%d", &countRoom) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	for (int i = 0; i < 5; i++) {
		if (max_distanceSchool != 0) {
			if (max_distanceHospital != 0) {
				if (max_distanceKindergarten != 0) {
					if (max_coin != 0) {
						if (countRoom != 0) {
							if (max_distanceSchool >= House[i].location.distanceSchool && max_distanceHospital >= House[i].location.distanceHospital && max_distanceKindergarten >= House[i].location.distanceKindergarten && max_coin >= House[i].flat.coin && countRoom >= House[i].flat.countRoom) {
								outH_1(i, 1); search = 1; (i);
							}
						}
						else {
							if (max_distanceSchool >= House[i].location.distanceSchool && max_distanceHospital >= House[i].location.distanceHospital && max_distanceKindergarten >= House[i].location.distanceKindergarten && max_coin >= House[i].flat.coin) {
								outH_1(i, 1); search = 1; (i);
							}
						}
					}
					else if (countRoom != 0) {
						if (max_distanceSchool >= House[i].location.distanceSchool && max_distanceHospital >= House[i].location.distanceHospital && max_distanceKindergarten >= House[i].location.distanceKindergarten && countRoom >= House[i].flat.countRoom) {
							outH_1(i, 1); search = 1; (i);
						}
					}
					else {
						if (max_distanceSchool >= House[i].location.distanceSchool && max_distanceHospital >= House[i].location.distanceHospital && max_distanceKindergarten >= House[i].location.distanceKindergarten) {
							outH_1(i, 1); search = 1; (i);
						}
					}
				}
				else if (max_coin != 0) {
					if (countRoom != 0) {
						if (max_distanceSchool >= House[i].location.distanceSchool && max_distanceHospital >= House[i].location.distanceHospital && max_coin >= House[i].flat.coin && countRoom >= House[i].flat.countRoom) {
							outH_1(i, 1); search = 1; (i);
						}
					}
					else {
						if (max_distanceSchool >= House[i].location.distanceSchool && max_distanceHospital >= House[i].location.distanceHospital && max_coin >= House[i].flat.coin) {
							outH_1(i, 1); search = 1; (i);
						}
					}
				}
				else if (countRoom != 0) {
					if (max_distanceSchool >= House[i].location.distanceSchool && max_distanceHospital >= House[i].location.distanceHospital && countRoom >= House[i].flat.countRoom) {
						outH_1(i, 1); search = 1; (i);
					}
				}
				else {
					if (max_distanceSchool >= House[i].location.distanceSchool && max_distanceHospital >= House[i].location.distanceHospital) {
						outH_1(i, 1); search = 1; (i);
					}
				}
			}
			else if (max_distanceKindergarten != 0) {
				if (max_coin != 0) {
					if (countRoom != 0) {
						if (max_distanceSchool >= House[i].location.distanceSchool && max_distanceKindergarten >= House[i].location.distanceKindergarten && max_coin >= House[i].flat.coin && countRoom >= House[i].flat.countRoom) {
							outH_1(i, 1); search = 1; (i);
						}
					}
					else {
						if (max_distanceSchool >= House[i].location.distanceSchool && max_distanceKindergarten >= House[i].location.distanceKindergarten && max_coin >= House[i].flat.coin) {
							outH_1(i, 1); search = 1; (i);
						}
					}
				}
				else if (countRoom != 0) {
					if (max_distanceSchool >= House[i].location.distanceSchool && max_distanceKindergarten >= House[i].location.distanceKindergarten && countRoom >= House[i].flat.countRoom) {
						outH_1(i, 1); search = 1; (i);
					}
				}
				else {
					if (max_distanceSchool >= House[i].location.distanceSchool && max_distanceKindergarten >= House[i].location.distanceKindergarten) {
						outH_1(i, 1); search = 1; (i);
					}
				}
			}
			else {
				if (max_distanceSchool >= House[i].location.distanceSchool) {
					outH_1(i, 1); search = 1; (i);
				}
			}
		}
		else {
			if (max_distanceHospital != 0) {
				if (max_distanceKindergarten != 0) {
					if (max_coin != 0) {
						if (countRoom != 0) {
							if (max_distanceHospital >= House[i].location.distanceHospital && max_distanceKindergarten >= House[i].location.distanceKindergarten && max_coin >= House[i].flat.coin && countRoom >= House[i].flat.countRoom) {
								outH_1(i, 1); search = 1; (i);
							}
						}
						else {
							if (max_distanceHospital >= House[i].location.distanceHospital && max_distanceKindergarten >= House[i].location.distanceKindergarten && max_coin >= House[i].flat.coin) {
								outH_1(i, 1); search = 1; (i);
							}
						}
					}
					else if (countRoom != 0) {
						if (max_distanceHospital >= House[i].location.distanceHospital && max_distanceKindergarten >= House[i].location.distanceKindergarten && countRoom >= House[i].flat.countRoom) {
							outH_1(i, 1); search = 1; (i);
						}
					}
					else {
						if (max_distanceHospital >= House[i].location.distanceHospital && max_distanceKindergarten >= House[i].location.distanceKindergarten) {
							outH_1(i, 1); search = 1; (i);
						}
					}
				}
				else if (max_coin != 0) {
					if (countRoom != 0) {
						if (max_distanceHospital >= House[i].location.distanceHospital && max_coin >= House[i].flat.coin && countRoom >= House[i].flat.countRoom) {
							outH_1(i, 1); search = 1; (i);
						}
					}
					else {
						if (max_distanceHospital >= House[i].location.distanceHospital && max_coin >= House[i].flat.coin) {
							outH_1(i, 1); search = 1; (i);
						}
					}
				}
				else if (countRoom != 0) {
					if (max_distanceHospital >= House[i].location.distanceHospital && countRoom >= House[i].flat.countRoom) {
						outH_1(i, 1); search = 1; (i);
					}
				}
				else {
					if (max_distanceHospital >= House[i].location.distanceHospital) {
						outH_1(i, 1); search = 1; (i);
					}
				}
			}
			else if (max_distanceKindergarten != 0) {
				if (max_coin != 0) {
					if (countRoom != 0) {
						if (max_distanceKindergarten >= House[i].location.distanceKindergarten && max_coin >= House[i].flat.coin && countRoom >= House[i].flat.countRoom) {
							outH_1(i, 1); search = 1; (i);
						}
					}
					else {
						if (max_distanceKindergarten >= House[i].location.distanceKindergarten && max_coin >= House[i].flat.coin) {
							outH_1(i, 1); search = 1; (i);
						}
					}
				}
				else if (countRoom != 0) {
					if (max_distanceKindergarten >= House[i].location.distanceKindergarten && countRoom >= House[i].flat.countRoom) {
						outH_1(i, 1); search = 1; (i);
					}
				}
				else {
					if (max_distanceKindergarten >= House[i].location.distanceKindergarten) {
						outH_1(i, 1); search = 1; (i);
					}
				}
			}
		}
	}

	if (search == 0) {
		printf("\n\nПо запросу ничего не найденно!\n\n");
	}
}

/// Вывод найденного
void outH_1(int i, int mod) {
	int choise = 0;
	int count = 0;

	printf("№ %d", i + 1);
	printf("\nАдрес дома: %s\n", House[i].location.houseAdress);
	printf("  Номер квартиры: %d\n", House[i].flat.numFlat);
	printf("  Расстояние до школы: %d км\n", House[i].location.distanceSchool);
	printf("  Расстояние до больницы: %d км\n", House[i].location.distanceHospital);
	printf("  Расстояние до детского сада: %d км\n", House[i].location.distanceKindergarten);
	printf("  Кол-во комнат: %d\n", House[i].flat.countRoom);
	printf("  Цена: %d рублей\n", House[i].flat.coin);

	for (int j = 0; j < 29; j++) {
		if (strcmp(House[i].location.houseAdress, Street[j].streetName) == 0) {
			printf("  Информация о улице: %s\n", Street[j].streetDescription);
		}
	}
	if (mod == 2) {
		printf("\n  1) Редактировать запись\n  2) В главное меню\n  Что вы хотите сделать? ");
		while (scanf("%d", &choise) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите число: ");
		}
		if (choise == 1) {
			Eddit(i + 1);
		}
	}
	
}

/// Добавление жилплощади
int Add(int count, ref* rePtr) {
	int t = 0;
	(*rePtr).countHouses++;
	printf("\nВводите данные.\n");
	printf("\nУлица: "); scanf("%s", &House[count].location.houseAdress); while (getchar() != '\n');
	for (int i = 0; i < count + 1; i++) {
		for (int j = 0; j < 29; j++) {
			if (strcmp(House[i].location.houseAdress, Street[j].streetName) == -1) {
				if (t == 0) {
					(*rePtr).countStreets++;
					t = 1;
					strcat(Street[j + 1].streetName, House[i].location.houseAdress);
					printf("  Информация о улице: ");
					scanf("%s", &Street[j + 1].streetDescription); while (getchar() != '\n');
				}
			}
		}
	}

	printf("  Номер дома: ");
	while (scanf("%d", &House[count].location.numHouse) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("  Номер квартиры: ");
	while (scanf("%d", &House[count].flat.numFlat) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("  Расстояние до школы: ");
	while (scanf("%d", &House[count].location.distanceSchool) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("  Расстояние до больницы:");
	while (scanf("%d", &House[count].location.distanceHospital) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("  Расстояние до детского сада: ");
	while (scanf("%d", &House[count].location.distanceKindergarten) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("  Кол-во комнат: ");
	while (scanf("%d", &House[count].flat.countRoom) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("  Цена: ");
	while (scanf("%d", &House[count].flat.coin) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	outH_1(count, 2);

	printf("\n\nПродолжить любая клавиша");
	_getch();

	(*rePtr).countHouses++;

	return count++;
}

/// Изменение жилплощади
int Eddit(int count) {
	return count;
}
