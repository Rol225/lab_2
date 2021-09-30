#define _CRT_SECURE_NO_WARNINGS

#include"lab_2.h"

int main() {
	//Подключение Русского языка
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int distanceSchool = 0;
	int distanceHospital = 0;
	int distanceKindergarten = 0;
	int coin = 0;
	int numHouse = 0;
	int numFlat = 0;
	int countRoom = 0;
	char houseStreet[30] = { 0 };
	char streetDescription[150] = { 0 };

	int option = 0;

	do {
		printf("  1) Структура locations\n  2) Структура flats\n  3) Структура streets\n  4) Структура houses\n  5) Выход\n");
		printf("Выберите действие: ");
		do {
			while (scanf("%d", &option) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}
			if (option > 5) {
				printf("\nОшибка. выбирете из допустимых значений: ");
			}
		} while (option > 5 || option <= 0);

		if (option == 1) {
			FunckForLocation();
		}
		else if (option == 2) {
			FunckForFlat();
		}
		else if (option == 3) {
			FunckForStreet();
		}
		else if (option == 4) {
			FunckForHouse();
		}
	} while (option != 5);
}

void FunckForLocation() {
	
	int distanceSchool, distanceHospital, distanceKindergarten, numHouse;
	char houseStreet[30];
	int option = 0;

	locations location;

	do {
		printf("\n\n  1) Заполнить через встроенную функцию\n  2) Заполнить через внешнюю функцию\n  3) Вывести информацию со структуры\n  4) Выход в главное меню\n");
		printf("Выберите действие: ");
		do {
			while (scanf("%d", &option) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}
			if (option > 3) {
				printf("\nОшибка. выбирете из допустимых значений: ");
			}
		} while (option > 3 || option <= 0);

		if (option == 1) {
			location = Location_console();
		}
		else if (option == 2) {
			printf("Выберите расстояние до школы: ");
			while (scanf("%d", &distanceSchool) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Выберите расстояние до больницы: ");
			while (scanf("%d", &distanceHospital) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Выберите расстояние до детского сада: ");
			while (scanf("%d", &distanceKindergarten) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Номер дома: ");
			while (scanf("%d", &numHouse) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("\nУлица: "); scanf("%s", &houseStreet); while (getchar() != '\n');

			location = Location(distanceSchool, distanceHospital, distanceKindergarten, houseStreet, numHouse);
		}
		else if (option == 3) {
			printf("\n");
			LocationViwe(location);
		}
	} while (option != 4);
	
}

void FunckForFlat() {
	int coin, countRoom, numFlat;
	int option = 0;
	flats flat;

	do {
		printf("\n\n  1) Заполнить через встроенную функцию\n  2) Заполнить через внешнюю функцию\n  3) Вывести информацию со структуры\n  4) Выход в главное меню\n");
		printf("Выберите действие: ");
		do {
			while (scanf("%d", &option) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}
			if (option > 3) {
				printf("\nОшибка. выбирете из допустимых значений: ");
			}
		} while (option > 3 || option <= 0);

		if (option == 1) {
			flat = Flat_console();
		}
		else if (option == 2) {
			printf("Выберите стоимость квартиры: ");
			while (scanf("%d", &coin) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Выберите кол-во комнат: ");
			while (scanf("%d", &countRoom) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Номер квартиры: ");
			while (scanf("%d", &numFlat) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			flat = Flat(coin, countRoom, numFlat);
		}
		else if (option == 3) {
			FlatViwe(flat);
		}

	} while (option != 4);
}

void FunckForStreet() {
	char streetName[30] = { 0 };
	char streetDescription[150] = { 0 };

	streets street;

	int option = 0;
	do {
		printf("\n\n  1) Заполнить через встроенную функцию\n  2) Заполнить через внешнюю функцию\n  3) Вывести информацию со структуры\n  4) Выход в главное меню\n");
		printf("Выберите действие: ");
		do {
			while (scanf("%d", &option) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}
			if (option > 3) {
				printf("\nОшибка. выбирете из допустимых значений: ");
			}
		} while (option > 3 || option <= 0);

		if (option == 1) {
			street = Street_console();
		}
		else if (option == 2) {
			
			printf("\nУлица: "); scanf("%s", &streetName); while (getchar() != '\n');
			printf("\nОписание улици: "); gets_s(streetDescription, 150);

			street.streetName[0] = 0;
			street.streetDescription[0] = 0;

			strcat(street.streetName, streetName);
			strcat(street.streetDescription, streetDescription);

			street = Street(streetName, streetDescription);
		}
		else if (option == 3) {
			StreetView(street);
		}

	} while (option != 4);
}

void FunckForHouse() {
	int distanceSchool, distanceHospital, distanceKindergarten, numHouse, coin, countRoom, numFlat;
	char streetDescription[150];
	char houseStreet[30];

	streets street;
	houses house;

	int option = 0;
	do {
		printf("\n\n  1) Заполнить через встроенную функцию\n  2) Заполнить через внешнюю функцию\n  3) Вывести информацию со структуры\n  4) Выход в главное меню\n");
		printf("Выберите действие: ");
		do {
			while (scanf("%d", &option) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}
			if (option > 3) {
				printf("\nОшибка. выбирете из допустимых значений: ");
			}
		} while (option > 3 || option <= 0);

		if (option == 1) {
			house = HouseAdd_console(street);
		}
		else if (option == 2) {

			printf("Выберите расстояние до школы: ");
			while (scanf("%d", &distanceSchool) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Выберите расстояние до больницы: ");
			while (scanf("%d", &distanceHospital) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Выберите расстояние до детского сада: ");
			while (scanf("%d", &distanceKindergarten) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Выберите стоимость квартиры: ");
			while (scanf("%d", &coin) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Выберите кол-во комнат: ");
			while (scanf("%d", &countRoom) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Номер дома: ");
			while (scanf("%d", &numHouse) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Номер квартиры: ");
			while (scanf("%d", &numFlat) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("\nУлица: "); scanf("%s", &houseStreet); while (getchar() != '\n');
			printf("\nОписание улици: "); gets_s(streetDescription, 150);

			house = HouseAdd(distanceSchool, distanceHospital, distanceKindergarten, houseStreet, numHouse, coin, countRoom, numFlat, streetDescription, street);
		}
		else if (option == 3) {
			House_view(house, street);
		}

	} while (option != 4);
}