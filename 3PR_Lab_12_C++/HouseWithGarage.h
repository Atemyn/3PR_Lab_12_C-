#pragma once
#include "Building.h"
#include "Garage.h"

class HouseWithGarage : public Building
{
private:
	Garage garage;
public:

	/* Функция по выводу свойств экземпляра класса Building. */
	void get()
	{
		cout << "Свойства данного здания:" << endl;
		cout << "Название строительной компании: " << companyName << endl;
		cout << "Общее количество зданий этой компании: " << countOfBuildings << endl;
		cout << "Тип здания: " << typeOfBuilding << endl;
		cout << "Адрес здания: " << address << endl;
		cout << "Длина стороны основания: " << sideLength << endl;
		cout << "Высота фундамента: " << basementHeight << endl;
		cout << "Высота этажа: " << floorHeight << endl;
		cout << "Количество этажей: " << floorAmount << endl;
		facade.getFacade();
		cout << "Коэффициент устойчивости: " << stabilityFactor << endl;
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

