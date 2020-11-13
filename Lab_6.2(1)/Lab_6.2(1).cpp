// 1 Спосіб --- "Ітераційний"
#include <iostream>
#include <time.h>
#include <iomanip>
#include <Windows.h>

void value_elements(int* a, const int elements, int Low, int High);
void vuvestu(int* a, const int elements);
void start(int* a, const int elements);

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));

	const int elements = 20;

	int a[elements];

	int Low = -30;
	int High = 40;

	value_elements(a, elements, Low, High);

	std::cout << "сформований масив: " << std::endl;
	std::cout << std::endl;
	vuvestu(a, elements);

	start(a, elements);

	std::cout << "модифікований масив: " << std::endl;
	std::cout << std::endl;
	vuvestu(a, elements);

	return 0;
}

void value_elements(int* a, const int elements, int Low, int High)
{
	int p_index = 0;
	for (int index = p_index; index < elements; index++)
	{
		a[index] = Low + rand() % (High - Low + 1);
	}
}

void vuvestu(int* a, const int elements)
{
	int p_index = 0;
	for (int index = p_index; index < elements; index++)
		std::cout << std::setw(5) << a[index];
	std::cout << std::endl;
	std::cout << std::endl;
}

void start(int* a, const int elements)
{
	int p_index = 0;
	int imin = p_index;
	int min;
	for (int j_index = p_index + 1; j_index < elements; j_index++)
	{
		if (a[j_index] % 2);
		else
			if (a[imin] > a[j_index])
			{
				imin = j_index;
			}
	}
	min = a[0];
	a[p_index] = a[imin];
	a[imin] = min;
}