#include<iostream>
//#include<string>
#include "Car.h"




void Car::SetCarModel(std::string Model) 
{
	CarModel = Model;
}

void Car::SetYearOfCarManufacture(int Year) 
{
		YearOfCarManufacture = Year;
}

void Car::SetCarColor(std::string Color)
{
	CarColor = Color;
}
	
void Car::SetYearOfTechnicalInspection(int* arr, int sizeArr)
{
	SizeArrayYearOfTechnicalInspection = sizeArr;
	if (!sizeArr) { YearOfTechnicalInspection = nullptr; return; }
	YearOfTechnicalInspection = new int[sizeArr];
	
	for (int i = 0; i < sizeArr; i++)
	{
		YearOfTechnicalInspection[i] = arr[i];
	}
}

void Car::SetCarOwners(const std::string* arr, int sizeArr)
{
	SizeArrayCarOwners = sizeArr;
	if (!sizeArr) { CarOwners = nullptr; return; }
	CarOwners = new std::string[sizeArr];
	
	for (int i = 0; i < sizeArr; i++)
	{
		CarOwners[i] = arr[i];
	}
}



std::string Car::GetCarModel() 
{
	return CarModel;
}

std::string Car::GetCarColor() 
{
	return CarColor;
}

int Car::GetYearOfCarManufacture()
{
	return YearOfCarManufacture;
}

bool Car::GetTestYearOfTechnicalInspection(int Year)
{
	return 
		std::find(YearOfTechnicalInspection,
		YearOfTechnicalInspection + 
			SizeArrayYearOfTechnicalInspection, Year)
		!=
		YearOfTechnicalInspection + SizeArrayYearOfTechnicalInspection;
}

int* Car::GetYearOfTechnicalInspection() 
{
	return YearOfTechnicalInspection;
}

int Car::GetSizeArrYearOfTechnicalInspection() 
{
	return SizeArrayYearOfTechnicalInspection;
}

std::string* Car::GetCarOwners() 
{
	return CarOwners;
}

int Car::GetSizeArrCarOwners() 
{
	return SizeArrayCarOwners;
}