
#include <iostream>
#include <fstream>
#include <string>



void DeleteArray(float** arr, int Line)
{
	for (int i = 0; i < Line; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

float** CreateArray(int Line)
{
	float** arr = new float* [Line];
	for (int i = 0; i < Line; i++)
	{
		arr[i] = new float[8];
	}
	return arr;
}

std::string Working(float** arr, int NumberOfCompanies)
{
	float* C_milk = new float[NumberOfCompanies];
	for (int i = 0;i < NumberOfCompanies;i++)
	{
		float  P1, P2, V1, V2;
		P1 = ((arr[i][0] * arr[i][1] + arr[i][0] * arr[i][2] + arr[i][1] * arr[i][2]) * 2) ;
		P2 = ((arr[i][3] * arr[i][4] + arr[i][3] * arr[i][5] + arr[i][4] * arr[i][5]) * 2) ;

		V1 = (arr[i][0] * arr[i][1] * arr[i][2]) ;
		V2 = (arr[i][3] * arr[i][4] * arr[i][5]) ;

		C_milk[i] = (
			( 
				(arr[i][6] * P2) - (arr[i][7] * P1) )
				/ 
					((V1 * P2) - (V2 * P1))
			) * 1000;

		
	}
	DeleteArray(arr, NumberOfCompanies);

	std::string StrRet;
	float a = C_milk[0];
	StrRet = std::to_string(1) + ' ' + std::to_string(C_milk[0]);

	for (int i = 0; i < NumberOfCompanies;i++)
	{
		if (C_milk[i] < a )
		{
			StrRet = std::to_string(i+1) + ' ' + std::to_string(C_milk[i]);
		}
	}

	delete[] C_milk;
	return StrRet;

}


void Return(std::string Str)
{
	std::fstream fin("Return.txt", std::ios::out);
	fin << Str;
	fin.close();
}



float** ReadFile(int& NumberOfSuppliers)
{

	std::string line;
	std::fstream in("1.txt", std::ios::in);
	if (in.is_open())
	{
		std::cout << "Read_OK" << std::endl;
	}
	else
	{
		std::cout << "Read_NO_OK" << std::endl;
		return nullptr;
	}

	std::getline(in, line);
	NumberOfSuppliers = std::stoi(line);
	float** arr;
	arr = CreateArray(NumberOfSuppliers);


	for (int i = 0; i < NumberOfSuppliers; i++)
	{
		
		for (int j = 0; j < 7; j++)
		{
			std::getline(in, line, ' ');
			arr[i][j] = std::stof(line);
			
		}

		std::getline(in, line, '\n');
		arr[i][7] = stof(line);
		
	}

	in.close();
	return arr;
}
