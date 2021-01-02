#pragma once
#include "Building.h"
#include "Garage.h"

class HouseWithGarage : public Building
{
private:
	Garage garage;
public:
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

