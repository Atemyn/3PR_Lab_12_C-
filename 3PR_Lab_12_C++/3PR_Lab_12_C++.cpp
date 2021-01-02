#include "Building.h"

int main()
{

	// Подключение русского консольного ввода.
	SetConsoleCP(1251);
	// Подключение русского консольного вывода.
	SetConsoleOutputCP(1251);

	/* Использование одномерных и двумерных массивов. */
	cout << "Использование одномерных и двумерных массивов:" << endl;
	const int N = 7;
	Building array1[N];
	Building::array1Forming(array1, N);
	cout << "Длины сторон получившихся зданий одномерного массива:" << endl;
	Building::array1Output(array1, N);

	const int M = 3;
	Building array2[N][M];
	Building* helpArray[N];
	for (int i = 0; i < N; i++)
	{
		helpArray[i] = array2[i];
	}
	Building::array2Forming(helpArray, N, M);
	cout << "Длины сторон получившихся зданий двумерного массива:" << endl;
	Building::array2Output(helpArray, N, M);
	/*................................................*/
	return 0;
}