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
	// �������� ������������� ����������� �������.
	// ����� ����� 375. 
	Building b1((string)"�������", (char*)"����� �������, 1�", 5.0, 1.0, 3.0, 5, 5, 5);
	// ����� ����� 376.
	HouseWithGarage h1((string)"�������", (char*)"����� �������, 1�", 5.0, 1.0, 3.0, 5, 5, 5, 1.0, 1.0, 1.0);
	bool f1, f2;
	f1 = b1.volumeLessThan(375.0);
	f2 = h1.volumeLessThan(375.0);
	cout << "f1 = " << f1 << endl;
	cout << "f2 = " << f2 << endl << endl;

	Building* b2 = new Building((string)"�������", (char*)"����� �������, 1�", 5.0, 1.0, 3.0, 5, 5, 5);
	HouseWithGarage* h2 = new HouseWithGarage((string)"�������", (char*)"����� �������, 1�", 5.0, 1.0, 3.0, 5, 5, 5, 1.0, 1.0, 1.0);
	b2 = h2;
	f1 = b2->volumeLessThan(375);
	cout << "����� ������������ ����������:" << endl;
	cout << "f1 = " << f1 << endl;
	/*...............................*/
	return 0;
}