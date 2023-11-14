#pragma once
//#include <string>
//#include <sstream>
//void Init();

int** CreateArray(int Line, int Ñolumn);
void DeleteArray(int** arr, int Line);

void InitializeArray(int** Arr, int Line, int Ñolumn, int& MaxEl);
void PrintArray(int** ArrViiVod, int ÑolumnDop, int line);
void PrintArray(int* Arr, int Leng, bool bVar = 1);

int MinElementInString(int* ArrViiVod, int Ñolumn);
int MaxElementInColumn(int** Arr, int Ñolumn, int line, int MaxEl);

void ChangeString(int** Arr, int line,int Str);
