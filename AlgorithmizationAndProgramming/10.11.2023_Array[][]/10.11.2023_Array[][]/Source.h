#pragma once
//#include <string>
//#include <sstream>
//void Init();

int** CreateArray(int Line, int �olumn);
void DeleteArray(int** arr, int Line);

void InitializeArray(int** Arr, int Line, int �olumn, int& MaxEl);
void PrintArray(int** ArrViiVod, int �olumnDop, int line);
void PrintArray(int* Arr, int Leng, bool bVar = 1);

int MinElementInString(int* ArrViiVod, int �olumn);
int MaxElementInColumn(int** Arr, int �olumn, int line, int MaxEl);

void ChangeString(int** Arr, int line,int Str);
