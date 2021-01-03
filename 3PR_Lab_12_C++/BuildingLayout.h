#pragma once
class BuildingLayout
{
protected:
	double characteristic;
	double height;
	double weight;
public:
	BuildingLayout(double characteristic, double height, double weight)
	{
		this->characteristic = characteristic;
		this->height = height;
		this->weight = weight;
	}
	BuildingLayout()
	{
		this->characteristic = 1.0;
		this->height = 1.0;
		this->weight = 1.0;
	}

	virtual double getVolume() = 0;

	double getDensity()
	{
		return weight / getVolume();
	}
};