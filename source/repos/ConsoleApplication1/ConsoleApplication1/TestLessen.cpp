
#include "TestLessen.h"
#include <iostream>
#include <ctime>

/*

void foo(int a, int b)
{
	int c = a;
	a = b;
	b = c;
}





int foo2(int& a, int& b, int& c)
{
	a += 20;
	b += -50;
	c *= 5;
	std::cout << a<< b<<c << std::endl;
	return a + b + c;
}*/
//
//void foo3(int &a, int &b)
//{
//	int c = a;
//	a = b;
//	b = c;
//	//return a,b;
//
//}
/**
template <typename T>
void Swap(T& a, T& b)
{
	T c = a;
	a = b;
	b = c;
}
*/

/*

int main1()
{

	std::cout << "Hello World!\n";
	const int SIZE = 5;
	int arr[SIZE]{};
	int MinNumber;
	bool bHaveOrNot;
	srand(time(NULL));

	for (int i = 0; i < SIZE;)
	{
		bHaveOrNot = false;
		int a = rand();
		for (int j = 0; j < i; j++)
		{
			if (*(arr + j) == a)
			{
				bHaveOrNot = true;
				break;
			}
		}

		if (!bHaveOrNot)
		{
			arr[i] = a;
			i++;
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << std::endl;
	}
	MinNumber = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (MinNumber > arr[i])
		{
			MinNumber = arr[i];
		}
	}
	std::cout << "===========================================" << std::endl;
	std::cout << "MinNumber = " << MinNumber << std::endl;
	int* a = arr;

	std::cout << a << "\t" << arr + 1 << "\t" << *(arr + 1) << std::endl;


	std::cout << "===========================================" << std::endl;


	//foo(arr, arr + 1);
	std::cout << arr[0] << std::endl;
	std::cout << arr[1] << std::endl;

	std::cout << "===========================================" << std::endl;

	//std::cout << foo2(arr[0], arr[1], arr[2]) << std::endl;
	std::cout << arr[0] << std::endl;
	std::cout << arr[1] << std::endl;
	std::cout << arr[2] << std::endl;

	std::cout << "===========================================" << std::endl;

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	std::cout << "===========================================" << std::endl;

	//foo3(arr[3], arr[4]);
	std::cout << arr[3] << std::endl;
	std::cout << arr[4] << std::endl;

	std::cout << "===========================================" << std::endl;

	Swap(arr[3], arr[4]);
	std::cout << arr[3] << std::endl;
	std::cout << arr[4] << std::endl << std::endl;
	double y = 56.48, x = 95.42;

	std::cout << y << std::endl;
	std::cout << x << std::endl;
	Swap(y, x);
	std::cout << y << std::endl;
	std::cout << x << std::endl << std::endl;

	std::string yx = "Hello ", xy = "World ";

	std::cout << yx;
	std::cout << xy << std::endl;
	Swap(yx, xy);
	std::cout << yx;
	std::cout << xy << std::endl;
	std::cout << "===========================================" << std::endl;

	return 0;
}
*/