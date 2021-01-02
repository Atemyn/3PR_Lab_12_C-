#pragma once
#include <iostream>
using namespace std;

class Garage
{
private:
	float sideLength;
	float sideWidth;
	float height;
public:
	// Функция по заданию приватных полей класса.
	void setGarage(float sideLength, float sideWidth, float height)
	{
		this->sideLength = sideLength;
		this->sideWidth = sideWidth;
		this->height = height;
	}

	void inputGarage()
	{
		cout << "Введите длину стороны гаража: ";
		while (!(cin >> sideLength) || cin.get() != '\n' || sideLength <= 0)
		{
			cout << "Неверный ввод длины стороны - она должна быть неотрицательным числом. Попробуйте еще раз: ";
			cin.clear();
			rewind(stdin);
		}

		cout << "Введите ширину стороны гаража: ";
		while (!(cin >> sideWidth) || cin.get() != '\n' || sideWidth <= 0)
		{
			cout << "Неверный ввод ширины стороны - она должна быть неотрицательным числом. Попробуйте еще раз: ";
			cin.clear();
			rewind(stdin);
		}

		cout << "Введите высоту гаража: ";
		while (!(cin >> height) || cin.get() != '\n' || height <= 0)
		{
			cout << "Неверный ввод высоты - она должна быть неотрицательным числом. Попробуйте еще раз: ";
			cin.clear();
			rewind(stdin);
		}
	}

	void getGarage()
	{
		cout << "Данные о гараже:" << endl;
		cout << "Длина стороны гаража:" << sideLength << endl;
		cout << "Ширина стороны гаража:" << sideWidth << endl;
		cout << "Высота гаража:" << height << endl;
	}

	float getSideLength()
	{
		return sideLength;
	}

	float getSideWidth()
	{
		return sideWidth;
	}

	float getHeight()
	{
		return height;
	}
};
