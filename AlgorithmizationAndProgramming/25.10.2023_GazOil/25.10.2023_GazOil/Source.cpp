
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
	k = stoi(Vvod);/// ���. �������

	std::cout << "Enter p = " ;
	std::cin >> Vvod;
	p = stoi(Vvod);/// ���. ��������� �� ������ ��������

	int* Arr = new int[k];
	Arr[0] = 0;

	for (int i = 1;i < k;i++)  // �������� ������ �������  
	{
		std::cout << "Between " << i << " and " << i + 1 << " = ";
		std::cin >> Vvod;
		Arr[i] = stoi(Vvod)+ Arr[(i - 1)];
	}

	int a;
	kx = k / 2;/// ������� ����� ���� ����� ����� �� �������� ���������� 

	for (int i = 0; i < kx; i++)
	{
		
		a = Arr[(kx - i)] - Arr[(kx - (i+1))];// ��������� ����� �������� ����� �� ������

		if (a >= (2 * p)) // ���� ����� ���������� ����� ��������
		{ 
			for (int j = 0;j <= (k - 1); j++)// �� ������� ��������� �� �������� �� ������� ������
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
		///���������� ����������� ������� �� ������� ���� �������.
	}

	delete[] Arr;
}