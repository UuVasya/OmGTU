
#include <iostream>
#include <string>
#include <sstream>

void DeleteArray(int** arr, int Line)
{
	for (int i = 0; i < Line; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

int** CreateArray(int Line, int �olumn)
{
	int** arr = new int* [Line];
	for (int i = 0; i < Line; i++)
	{
		arr[i] = new int[�olumn] {};
	}
	return arr;
}


void InitializeArray(int** Arr, int Line, int �olumn,int& MaxEl)// ������� ����������
{
	using namespace std;
	
	string InputLine;
	string Word;
	for (int i = 0; i < Line; i++)
	{
		std::cout << "������� �������� "<< i+1 << " ������ ����� ������" << std::endl;
		
		getline(cin, InputLine);

		std::istringstream ist(InputLine);

		int j=0;
		while (ist>>Word)
		{
			Arr[i][j] = stoi(Word);
			j++;
			if (MaxEl < stoi(Word)) { MaxEl = stoi(Word); }

			if(!(j < �olumn)) break;
		}
		InputLine.clear();
		
	}
}

void PrintArray(int** ArrViiVod, int �olumnDop, int line)
{
	for (int i = 0; i < line; i++)
	{
		std::cout << "������ � " << i + 1 << " ������� = | ";

		for (int j = 0; j < �olumnDop; j++)
		{
			std::cout << ArrViiVod[i][j];
			if (j < (�olumnDop - 1))std::cout << "\t";
		}
		std::cout << " |" << std::endl;
	}
}


void PrintArray(int* Arr, int Leng,bool bVar = 1)
{
	if(!bVar)std::cout << "���������� == MAX �������� � ������� = | ";
	for (int j = 0; j < Leng; j++)
	{
		if (bVar)
		{
			std::cout << "MIN ������� " << j + 1 << " ������ = | ";
			std::cout << Arr[j] << " |" << std::endl;
		}
		else 
		{
			std::cout << Arr[j] ;
			if (j < Leng-1) { std::cout << "\t"; }
			else { std::cout << " |" << std::endl; }
		}
		
	}
		
	
}


int MinElementInString(int* Arr, int �olumn) 
{
	int a = 0x7FFFFFFF;
	for (int i = 0; i < �olumn; i++)
	{
		if (a > Arr[i]) a = Arr[i];
	}
	return a;
}


int MaxElementInColumn(int** Arr, int �olumn, int line, int MaxEl)
{
	int a = 0;
	for (int i = 0; i < line; i++)
	{
		if (MaxEl == Arr[i][�olumn]) a++;
	}
	return a;
}


void ChangeString(int** Arr, int line,int Str) 
{
	
	int* a = *(Arr+Str);
	Str++;
	*(Arr + (Str-1)) = *(Arr + Str);
	*(Arr + Str) = a;
	line -= 2;
	if (line >= 2)ChangeString(Arr,line,Str+1);

}


