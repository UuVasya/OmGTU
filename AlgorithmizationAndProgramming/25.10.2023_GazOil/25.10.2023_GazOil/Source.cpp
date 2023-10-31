
#include <iostream>
#include <string>







int main() 
{

	int p = 0;
	int k = 0,kx = 0;
	int DistanceMin = 0;
	std::string Vvod;

	std::cout << "Number of cities = ";
	std::cin >> Vvod;
	k = stoi(Vvod);/// Кол. городов

	std::cout << "Enter p = " ;
	std::cin >> Vvod;
	p = stoi(Vvod);/// Мин. растояние от города заправки

	int* Arr = new int[k];
	Arr[0] = 0;

	for (int i = 1;i < k;i++)  // забиваем массив данными  
	{
		std::cout << "Between " << i << " and " << i + 1 << " = ";
		std::cin >> Vvod;
		Arr[i] = stoi(Vvod)+ Arr[(i - 1)];
	}

	int a;
	kx = k / 2;/// Средний город либо левый город от среднего промежутка 

	for (int i = 0; i < kx; i++)
	{
		
		a = Arr[(kx - i)] - Arr[(kx - (i+1))];// растояние между городами слева от центра

		if (a >= (2 * p)) // если можем разместить между городами
		{ 
			for (int j = 0;j <= (k - 1); j++)// то считаем растояние до заправки от каждого города
			{
				a = Arr[(kx - i)] - p;

				DistanceMin += std::abs(a - Arr [j]);
			}

			break; 
		}

		a = Arr[(kx + i + 1)] - Arr[(kx + i)];

		if (a >= (2 * p))
		{
			for (int j = 0; j <= (k - 1); j++)
			{
				a = Arr[(kx + i)] + p;

				DistanceMin += std::abs(a - Arr[j]);
			}

			break; 
		};
	}
	
	if (DistanceMin)
	{
		std::cout << "DistanceMin = " << DistanceMin << std::endl;
	}
	else 
	{
		std::cout << "Place a gas station on the outskirts of a sequence of cities." << std::endl;
		///Разместите заправочную станцию на окраине ряда городов.
	}

	delete[] Arr;
}