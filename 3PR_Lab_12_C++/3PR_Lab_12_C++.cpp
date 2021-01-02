#include "Building.h"

int main()
{

	// ����������� �������� ����������� �����.
	SetConsoleCP(1251);
	// ����������� �������� ����������� ������.
	SetConsoleOutputCP(1251);

	/* ������������� ���������� � ��������� ��������. */
	cout << "������������� ���������� � ��������� ��������:" << endl;
	const int N = 7;
	Building array1[N];
	Building::array1Forming(array1, N);
	cout << "����� ������ ������������ ������ ����������� �������:" << endl;
	Building::array1Output(array1, N);

	const int M = 3;
	Building array2[N][M];
	Building* helpArray[N];
	for (int i = 0; i < N; i++)
	{
		helpArray[i] = array2[i];
	}
	Building::array2Forming(helpArray, N, M);
	cout << "����� ������ ������������ ������ ���������� �������:" << endl;
	Building::array2Output(helpArray, N, M);
	/*................................................*/
	return 0;
}