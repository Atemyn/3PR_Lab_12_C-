#include "HouseWithGarage.h"

int main()
{

	// ����������� �������� ����������� �����.
	SetConsoleCP(1251);
	// ����������� �������� ����������� ������.
	SetConsoleOutputCP(1251);

	/* ������ � ����������� �������. */
	HouseWithGarage house1;
	house1.input();
	house1.get();

	HouseWithGarage* house2 = new HouseWithGarage((string)"�������", (char *)"����� �������, 1�", 5.0, 1.0, 3.0, 5, 5, 5, 1.0, 2.0, 3.0);
	cout << *house2;

	Building building;
	HouseWithGarage house3;
	house3 = building;
	cout << house3;
	/*...............................*/
	return 0;
}