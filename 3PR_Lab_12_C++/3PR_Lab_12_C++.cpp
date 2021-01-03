#include "HouseWithGarage.h";
#include "SquareBaseBuilding.h";
#include "CircleBaseBuilding.h";
#include "TetrahedronBuilding.h";

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
	// Разумное использование виртуальной функции.
	// Объем равен 375. 
	Building b1((string)"Коттедж", (char*)"улица Пушкина, 1А", 5.0, 1.0, 3.0, 5, 5, 5);
	// Объем равен 376.
	HouseWithGarage h1((string)"Коттедж", (char*)"улица Пушкина, 1А", 5.0, 1.0, 3.0, 5, 5, 5, 1.0, 1.0, 1.0);
	bool f1, f2;
	f1 = b1.volumeLessThan(375.0);
	f2 = h1.volumeLessThan(375.0);
	cout << "f1 = " << f1 << endl;
	cout << "f2 = " << f2 << endl << endl;

	Building* b2 = new Building((string)"Коттедж", (char*)"улица Пушкина, 1А", 5.0, 1.0, 3.0, 5, 5, 5);
	HouseWithGarage* h2 = new HouseWithGarage((string)"Коттедж", (char*)"улица Пушкина, 1А", 5.0, 1.0, 3.0, 5, 5, 5, 1.0, 1.0, 1.0);
	b2 = h2;
	f1 = b2->volumeLessThan(375);
	cout << "Через присваивание указателей:" << endl;
	cout << "f1 = " << f1 << endl << endl;
	// Производные классы от абстрактного класса.
	SquareBaseBuilding s(5.0, 10.0, 1000.0);
	CircleBaseBuilding c(5.0, 10.0, 1000.0);
	TetragedronBuilding t(5.0, 10.0, 1000.0);
	cout << "Здание с квадратным основанием:" << endl << "Объем: " << s.getVolume() << endl << "Плотность: " << s.getDensity() << endl << endl;
	cout << "Здание с круглым основанием:" << endl << "Объем: " << c.getVolume() << endl << "Плотность: " << c.getDensity() << endl << endl;
	cout << "Здание-тетраэдр:" << endl << "Объем: " << t.getVolume() << endl << "Плотность: " << t.getDensity() << endl << endl;
	/*...............................*/
	return 0;
}