
#include <iostream>
#include <string>

//void IncreaseArrayToTen(int*& arr, int& size); //��������� ������ �� 10 int-��
void ElementsPerLine(int* array, int Line, int& Max, int& Min);
int** CreateArray(int Line, int* �olumn);
int** CreateArray(int Line, int �olumn);
void DeleteArray(int** arr,int Line);
void InitializeArray(int** Arr, int Line, int* �olumn);

void UnificationMultiplicity(int** ArrVvod, int* Arr, int Line, int* �olumn, int& a, int& LengthArray); /// �����������
void IntersectionMultiplicity(int** ArrVvod, int* first, int* Arr, int& a, int* �olumn, int line, int b ); ///�����������
void ComplementIntersection(int** ArrVvod, int** ArrViiVod, int* Arr, int* Colomn, int* �olumnDop, int line, int LengthArrayUnification);
bool bIdenticalNumbersTest(int* arr, int test, int size);/// ���� �� ���������� �����
bool AAA(int** arr, int a, int* Col, int b, int line);/// ���� ��� ���������� � N ��. ����� ���������� ��� ����������� ��.1 � 2.
void PrintMulti(int* Arr, int sizearr, bool a);
void PrintComplementIntersection(int** ArrViiVod, int* �olumnDop, int line);

int main() 
{
	int MaxElementsInLine = 0;
	int MinElementsInLine = 0x7FFFFFFF;
	int Lines = 0;

	std::string Vvod; 
	std::cout << "Number of sets = ";
	std::cin >> Vvod;
	Lines = stoi(Vvod);

	int* �olumns = new int[Lines]; 
	ElementsPerLine(�olumns, Lines, MaxElementsInLine, MinElementsInLine);
	
	int** arr;
	arr = CreateArray(Lines, �olumns);
	InitializeArray(arr, Lines, �olumns);


	int ElemUnification = 0;
	int* ElementsUnification = new int[MaxElementsInLine];
	UnificationMultiplicity(arr , ElementsUnification, Lines, �olumns, ElemUnification, MaxElementsInLine);
	PrintMulti(ElementsUnification, ElemUnification, 0);
	

	int* ElementsIntersection = new int[MinElementsInLine] {0};
	int ElemIntersection = 0;
	IntersectionMultiplicity(arr, arr[0], ElementsIntersection, ElemIntersection, �olumns,Lines,0);
	PrintMulti(ElementsIntersection, ElemIntersection, 1);
	
	int** ArrDop;
	ArrDop = CreateArray(Lines, ElemUnification);
	int* �olumnsDop = new int[Lines];
	ComplementIntersection(arr, ArrDop, ElementsUnification, �olumns, �olumnsDop, Lines, ElemUnification);
	PrintComplementIntersection(ArrDop, �olumnsDop, Lines);


	delete[] ElementsIntersection;
	delete[] ElementsUnification;
	delete[] �olumns;
	delete[] �olumnsDop;

	DeleteArray(arr,Lines);
	DeleteArray(ArrDop, Lines);
}


void DeleteArray(int** arr, int Line)
{
	for (int i = 0; i < Line; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}


void ElementsPerLine(int* array,int Line, int& Max,int& Min) 
{
	std::string Vvod;
	for (int i = 0;i < Line;i++)
	{
		std::cout << "Number of elements in a set "<<i+1<<" = ";
		std::cin >> Vvod;
		array[i] = stoi(Vvod);
		 Max += array[i]; 
		if (Min > array[i]) { Min = array[i]; }
	}
}


int** CreateArray( int Line, int* �olumn)
{
	int** arr = new int* [Line];
	for (int i = 0; i < Line; i++)
	{
		arr[i] = new int[�olumn[i]];
	}
	return arr;
}


int** CreateArray(int Line, int �olumn)
{
	int** arr = new int* [Line];
	for (int i = 0; i < Line; i++)
	{
		arr[i] = new int[�olumn];
	}
	return arr;
}


void InitializeArray(int** Arr, int Line, int* �olumn)// ������� ����������
{
	std::string Vvod;
	for (int i = 0; i < Line; i++)
	{
		for (int j = 0; j < �olumn[i]; j++)
		{			
			std::cin >> Vvod;
			Arr[i][j] = stoi(Vvod);
		}
		std::cout << std::endl;
	}
}



/// �����������
void UnificationMultiplicity(int** ArrVvod, int* Arr , int Line, int* �olumn,int& a,int& LengthArray)
{
	if (Line == 1) { return; }

	for (int j = 0; j < Line; j++)
	{
		for (int i = 0; i < �olumn[j]; i++)
		{
			if (bIdenticalNumbersTest(Arr, ArrVvod[j][i], a)) { continue; }
			Arr[a] = ArrVvod[j][i];
					a++;
		}
	}
}
// 
// void IncreaseArrayToTen(int*& arr,int& size)
// {
// 	int* NewArr = new int[size + 1];
// 
// 	for (int i = 0 ; i < size ; i++ )
// 	{
// 		NewArr[i] = arr[i];
// 	}
// 	size += 1;
// 
// 	delete[] arr;
// 	arr = NewArr;
// }


/// �����������
void IntersectionMultiplicity(int** ArrVvod, int* first, int* Arr, int& a, int* �olumn, int line, int b)
{
	if (line==1) { return; }

	line -= 1;
	for (int i = 0; i < �olumn[0]; i++)
	{	
		if (b < line)
		{
			if (AAA(ArrVvod, first[i], �olumn, b, line ))
			{
				if (bIdenticalNumbersTest(Arr, ArrVvod[0][i], a)) { continue; }
				Arr[a] = ArrVvod[0][i];
				a++;
			}
		}
		else
		{
			if (bIdenticalNumbersTest(Arr, ArrVvod[0][i], a)) { continue; }
			Arr[a] = ArrVvod[0][i];
			a++;
		}	
	}
}


bool AAA(int** arr,int a,int *Col,int b,int line) 
{
	b++;
	for (int i = 0;i<Col[b];i++)
	{
		if (a==arr[b][i])
		{	if (b<line)
			{
				if(AAA(arr, a, Col, b, line))return true;
			}
			else { return true; }	
		}
	}
	return false;
}


bool bIdenticalNumbersTest(int* arr,int test,int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == test) { return true; }
	}
	return false;
}


void ComplementIntersection(int** ArrVvod, int** ArrViiVod, int* Arr, int* Colomn, int* �olumnDop, int line, int LengthArrayUnification)
{

	for (int i = 0; i < line; i++)
	{
		int a = 0;

		for (int j = 0; j < LengthArrayUnification; j++)
		{
			if (!bIdenticalNumbersTest(ArrVvod[i], Arr[j], Colomn[i]))
			{
				if (bIdenticalNumbersTest(ArrViiVod[i], Arr[j], a)) { continue; }
				ArrViiVod[i][a] = Arr[j];
				a++;
			}


		}
		�olumnDop[i] = a;
	}
}


void PrintMulti(int* Arr, int sizearr, bool a)
{
	if (a)  std::cout << "IntersectionMultiplicity = { ";
	else std::cout << "UnificationMultiplicity = { ";

	for (int i = 0; i < sizearr; i++)
	{
		std::cout << *(Arr + i) << " ";
	}
	std::cout << "}" << std::endl;
}


void PrintComplementIntersection(int** ArrViiVod, int* �olumnDop, int line)
{
	for (int i = 0; i < line; i++)
	{
		std::cout << "ComplementIntersectionMultiplicity # " << i + 1 << "= {";

		for (int j = 0; j < �olumnDop[i]; j++)
		{
			std::cout << ArrViiVod[i][j] << " ";
		}
		std::cout << "}" << std::endl;
	}
}
