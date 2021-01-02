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
	// ������� �� ������� ��������� ����� ������.
	void setGarage(float sideLength, float sideWidth, float height)
	{
		this->sideLength = sideLength;
		this->sideWidth = sideWidth;
		this->height = height;
	}

	void inputGarage()
	{
		cout << "������� ����� ������� ������: ";
		while (!(cin >> sideLength) || cin.get() != '\n' || sideLength <= 0)
		{
			cout << "�������� ���� ����� ������� - ��� ������ ���� ��������������� ������. ���������� ��� ���: ";
			cin.clear();
			rewind(stdin);
		}

		cout << "������� ������ ������� ������: ";
		while (!(cin >> sideWidth) || cin.get() != '\n' || sideWidth <= 0)
		{
			cout << "�������� ���� ������ ������� - ��� ������ ���� ��������������� ������. ���������� ��� ���: ";
			cin.clear();
			rewind(stdin);
		}

		cout << "������� ������ ������: ";
		while (!(cin >> height) || cin.get() != '\n' || height <= 0)
		{
			cout << "�������� ���� ������ - ��� ������ ���� ��������������� ������. ���������� ��� ���: ";
			cin.clear();
			rewind(stdin);
		}
	}

	void getGarage()
	{
		cout << "������ � ������:" << endl;
		cout << "����� ������� ������:" << sideLength << endl;
		cout << "������ ������� ������:" << sideWidth << endl;
		cout << "������ ������:" << height << endl;
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
