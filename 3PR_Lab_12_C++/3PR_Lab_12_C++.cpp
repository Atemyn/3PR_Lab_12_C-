#include "HouseWithGarage.h"

int main()
{

	// Подключение русского консольного ввода.
	SetConsoleCP(1251);
	// Подключение русского консольного вывода.
	SetConsoleOutputCP(1251);

	/* Работа с производным классом. */
	HouseWithGarage house1;
	house1.input();
	house1.get();

	HouseWithGarage* house2 = new HouseWithGarage((string)"Коттедж", (char *)"улица Пушкина, 1А", 5.0, 1.0, 3.0, 5, 5, 5, 1.0, 2.0, 3.0);
	cout << *house2;

	Building building;
	HouseWithGarage house3;
	house3 = building;
	cout << house3;
	/*...............................*/
	return 0;
}