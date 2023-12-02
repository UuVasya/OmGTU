
#include <iostream>
//#include <string>
#include "Source.h"


int main()
{

	int NumberOfCompanies = 0;
	float** arr = ReadFile(NumberOfCompanies);

	if (!arr) return -1;
	
	Return(Working( arr, NumberOfCompanies));

}