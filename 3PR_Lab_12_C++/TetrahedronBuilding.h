#pragma once
#include "BuildingLayout.h"
#include <Math.h>

class TetragedronBuilding : public BuildingLayout
{
public:
	TetragedronBuilding(double characteristic, double height, double weight) : BuildingLayout(characteristic, height, weight)
	{
	}
	TetragedronBuilding() :BuildingLayout()
	{
	}
	double getVolume()
	{
		return characteristic * characteristic * characteristic * sqrt(2.0) / 12;
	}
};
