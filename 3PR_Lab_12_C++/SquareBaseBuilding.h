#pragma once
#include "BuildingLayout.h"

class SquareBaseBuilding : public BuildingLayout
{
public:
	SquareBaseBuilding(double characteristic, double height, double weight) : BuildingLayout(characteristic, height, weight)
	{
	}
	SquareBaseBuilding() :BuildingLayout()
	{
	}
	double getVolume()
	{
		return characteristic * characteristic * height;
	}
};