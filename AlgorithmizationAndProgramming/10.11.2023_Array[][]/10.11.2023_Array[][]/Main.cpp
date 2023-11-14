
#include <iostream>
#include <string>
#include "Source.h"


int main() 
{
	setlocale(LC_ALL, "Rus");
	int Lines = 5;
	int Columns = 5;

	std::string Vvod;
	std::cout << "Number of lines = ";
	std::getline(std::cin, Vvod);
	Lines = stoi(Vvod);
	
	//Vvod.clear();

	std::cout << "Number of Columns = ";
	std::getline(std::cin, Vvod);
    Columns = stoi(Vvod);
	//Vvod.clear();
	int* MinElementArray = new int[Lines];
	int* MaxElementColumns = new int[Columns];

	int MaxElementAllArray = 0;


	int** arr;
	arr = CreateArray(Lines, Columns);

	InitializeArray(arr, Lines, Columns, MaxElementAllArray);

	for (int i = 0; i < Lines; i++)
	{
		MinElementArray[i] = MinElementInString(arr[i], Columns);
	}


	for (int i = 0; i < Columns; i++)
	{
		MaxElementColumns[i] = MaxElementInColumn(arr, i , Lines, MaxElementAllArray);
	}

	PrintArray(arr, Columns, Lines);
	if(Lines>1)ChangeString(arr, Lines, 0);



	std::cout << "MinElementString" << std::endl;
	PrintArray(MinElementArray, Lines);

	std::cout << "MaxElementColumns" << std::endl;
	PrintArray(MaxElementColumns, Columns,0);



	PrintArray(arr, Columns, Lines);

	DeleteArray(arr, Lines);
}