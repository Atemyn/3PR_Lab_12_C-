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
		cout << "�������� ������� ������:" << endl;
		cout << "�������� ������������ ��������: " << companyName << endl;
		cout << "����� ���������� ������ ���� ��������: " << countOfBuildings << endl;
		cout << "��� ������: " << h.typeOfBuilding << endl;
		cout << "����� ������: " << h.address << endl;
		cout << "����� ������� ���������: " << h.sideLength << endl;
		cout << "������ ����������: " << h.basementHeight << endl;
		cout << "������ �����: " << h.floorHeight << endl;
		cout << "���������� ������: " << h.floorAmount << endl;
		h.facade.getFacade();
		cout << "����������� ������������: " << h.stabilityFactor << endl;
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

