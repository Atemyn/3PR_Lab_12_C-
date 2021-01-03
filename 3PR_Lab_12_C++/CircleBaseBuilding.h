#pragma once
#define _USE_MATH_DEFINES
#include "BuildingLayout.h"
#include <Math.h>

class CircleBaseBuilding : public BuildingLayout
{
public:
	CircleBaseBuilding(double characteristic, double height, double weight) : BuildingLayout(characteristic, height, weight)
	{
	}
	CircleBaseBuilding() :BuildingLayout()
	{
	}
	double getVolume()
	{
		return M_PI * characteristic * characteristic * height +
			2.0 / 3.0 * M_PI * characteristic * characteristic * characteristic;
	}
};