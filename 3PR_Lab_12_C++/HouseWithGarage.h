#pragma once
#include "Building.h"
#include "Garage.h"

class HouseWithGarage : public Building
{
private:
	Garage garage;
public:

	/* ������� �� ������ ������� ���������� ������ Building. */
	void get()
	{
		cout << "�������� ������� ������:" << endl;
		cout << "�������� ������������ ��������: " << companyName << endl;
		cout << "����� ���������� ������ ���� ��������: " << countOfBuildings << endl;
		cout << "��� ������: " << typeOfBuilding << endl;
		cout << "����� ������: " << address << endl;
		cout << "����� ������� ���������: " << sideLength << endl;
		cout << "������ ����������: " << basementHeight << endl;
		cout << "������ �����: " << floorHeight << endl;
		cout << "���������� ������: " << floorAmount << endl;
		facade.getFacade();
		cout << "����������� ������������: " << stabilityFactor << endl;
		garage.getGarage();
		cout << endl;
	}

	void input()
	{
		Building::input();
		garage.inputGarage();
	}

	void getGarage()
	{
		garage.getGarage();
	}

	float getSideLength()
	{
		garage.getSideLength();
	}

	float getSideWidth()
	{
		garage.getSideWidth();
	}

	float getHeight()
	{
		garage.getHeight();
	}
};

