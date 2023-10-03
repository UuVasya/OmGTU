
#include <iostream>
#include <string>


int degree10(int a) 
{ 
	int b = 1;
	for (int i=1;i<=a;i++)
	{
		b *= 10;	
	}
	return b;
}




void main()
{
	setlocale(LC_ALL, "Rus");
	int SizeMass;
	int ScaleOfNorm=0;

	int Element4=0;
	

	bool MltipleOfEight = true;
	std::string MltipleEight = "У всех элементов произведение четных чисел кратно 8";


	std::cout << "Введите количество элементов: ";
	std::cin >> SizeMass ;
	int* Mass = new int[SizeMass];

	for (int i =0;i<SizeMass;i++) // Запоснение массива n-количеством чисел
	{
		std::string a;
		std::cin >> a;
		Mass[i]=stoi(a);

	}

	for (int i = 0; i < SizeMass; i++)// Первое Задание
	{
		if((Mass[i] % 3) == (Mass[i] % 5)|| (Mass[i] % 5) == (Mass[i] % 7))
		{
			ScaleOfNorm++;
		}
		
	}
	

	for (int i = 0; i < SizeMass; i++)// Второе Задание
	{
		int a = Mass[i];
		int count = 0;
		bool Elem4 = true;
		int  MOfE = 1;

		while (a) 
		{
			a /= 10;
			count++;
		}
		a = Mass[i];
		
			for (int J = 1; J <= count; J++)
			{
				int E4;
				E4 = a / degree10(count-J);
				if (E4 == 4) {Elem4 = false;}

				if ((E4%2)==0)					//Для 
				{
					MOfE *= E4;					//Третьего
				}								//Задания

				a -= E4 * degree10(count-J);
			}
		

		if (!Elem4)
		{
			Element4++;
			
		}

		if (MltipleOfEight)// Пока кратно 8 - заходим
		{
			if (MOfE % 8) 
			{ 
				MltipleOfEight = false;
				MltipleEight = "НЕ у всех элементов произведение четных чисел кратно 8";
			}
		}
	}





	std::cout << "Кол. элем. с одинаковым окончанием в СС-3,2,7: " << ScaleOfNorm << std::endl;
	std::cout << "Кол. элем. с цифрой 4 на борту: " << Element4 << std::endl;

	std::cout  << MltipleEight << std::endl;

	delete[] Mass;
}