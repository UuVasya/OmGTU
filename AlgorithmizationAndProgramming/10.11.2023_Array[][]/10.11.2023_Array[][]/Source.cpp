
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

int** CreateArray(int Line, int Ñolumn)
{
	int** arr = new int* [Line];
	for (int i = 0; i < Line; i++)
	{
		arr[i] = new int[Ñolumn] {};
	}
	return arr;
}


void InitializeArray(int** Arr, int Line, int Ñolumn,int& MaxEl)// Ôóíêöèÿ çàïîëíåíèÿ
{
	using namespace std;
	
	string InputLine;
	string Word;
	for (int i = 0; i < Line; i++)
	{
		std::cout << "Ââîäèòå çíà÷åíèÿ "<< i+1 << " ñòðîêè ÷åðåç ïðîáåë" << std::endl;
		
		getline(cin, InputLine);

		std::istringstream ist(InputLine);

		int j=0;
		while (ist>>Word)
		{
			Arr[i][j] = stoi(Word);
			j++;
			if (MaxEl < stoi(Word)) { MaxEl = stoi(Word); }

			if(!(j < Ñolumn)) break;
		}
		InputLine.clear();
		
	}
}

void PrintArray(int** ArrViiVod, int ÑolumnDop, int line)
{
	for (int i = 0; i < line; i++)
	{
		std::cout << "Ñòðîêà ¹ " << i + 1 << " Ìàññèâà = | ";

		for (int j = 0; j < ÑolumnDop; j++)
		{
			std::cout << ArrViiVod[i][j];
			if (j < (ÑolumnDop - 1))std::cout << "\t";
		}
		std::cout << " |" << std::endl;
	}
}


void PrintArray(int* Arr, int Leng,bool bVar = 1)
{
	if(!bVar)std::cout << "Êîëè÷åñòâî == MAX ýëåìåíòÓ â ñòîëáöå = | ";
	for (int j = 0; j < Leng; j++)
	{
		if (bVar)
		{
			std::cout << "MIN ýëåìåíò " << j + 1 << " ñòðîêè = | ";
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


int MinElementInString(int* Arr, int Ñolumn) 
{
	int a = 0x7FFFFFFF;
	for (int i = 0; i < Ñolumn; i++)
	{
		if (a > Arr[i]) a = Arr[i];
	}
	return a;
}


int MaxElementInColumn(int** Arr, int Ñolumn, int line, int MaxEl)
{
	int a = 0;
	for (int i = 0; i < line; i++)
	{
		if (MaxEl == Arr[i][Ñolumn]) a++;
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


