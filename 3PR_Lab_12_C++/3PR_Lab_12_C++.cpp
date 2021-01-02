#include "HouseWithGarage.h"

int main()
{

	// Подключение русского консольного ввода.
	SetConsoleCP(1251);
	// Подключение русского консольного вывода.
	SetConsoleOutputCP(1251);

	/* Работа с производным классом. */
	HouseWithGarage house;
	house.input();
	house.get();
	/*...............................*/
	return 0;
}