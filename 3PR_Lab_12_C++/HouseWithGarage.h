#pragma once
#include "Building.h"
#include "Garage.h"

class HouseWithGarage : public Building
{
private:
	Garage garage;
public:
	HouseWithGarage()
	{
		this->garage.setGarage(1.0, 1.0, 1.0);
	}
	HouseWithGarage(string typeOfBuilding, char* address, float sideLength, float basementHeight,
		float floorHeight, int floorAmount, int windowsAmount, int openedWindowsAmount, float sideLengthG,
		float sideWidthG, float heightG) :Building(typeOfBuilding, address, sideLength, basementHeight, floorHeight, floorAmount, windowsAmount, openedWindowsAmount)
	{
		this->garage.setGarage(sideLengthG, sideWidthG, heightG);
	}
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
	
	float getVolume()
	{
		return (sideLength * sideLength * floorHeight * floorAmount) + 
			(getSideLength() * getSideWidth() * getHeight());
	}

	void operator=(Building b)
	{
		this->typeOfBuilding = b.getTypeOfBuilding();
		this->address = b.getAddress();
		this->sideLength = b.getSideLength();
		this->basementHeight = b.getBasementHeight();
		this->floorHeight = b.getFloorHeight();
		this->floorAmount = b.getFloorAmount();
		this->facade = b.getFacade();
		this->stabilityFactor = b.getStabilityFactor();
		this->garage.setGarage(1, 1, 1);
	}

	friend void operator<<(ostream& o, HouseWithGarage h)
	{
		cout << "Свойства данного здания:" << endl;
		cout << "Название строительной компании: " << companyName << endl;
		cout << "Общее количество зданий этой компании: " << countOfBuildings << endl;
		cout << "Тип здания: " << h.typeOfBuilding << endl;
		cout << "Адрес здания: " << h.address << endl;
		cout << "Длина стороны основания: " << h.sideLength << endl;
		cout << "Высота фундамента: " << h.basementHeight << endl;
		cout << "Высота этажа: " << h.floorHeight << endl;
		cout << "Количество этажей: " << h.floorAmount << endl;
		h.facade.getFacade();
		cout << "Коэффициент устойчивости: " << h.stabilityFactor << endl;
		h.garage.getGarage();
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
		return garage.getSideLength();
	}

	float getSideWidth()
	{
		return garage.getSideWidth();
	}

	float getHeight()
	{
		return garage.getHeight();
	}

};

