#pragma once
#include<string>
#include "Counter.cpp"

class Car
{



public:
	
	~Car();

	void SetCarModel(std::string Model);
	void SetYearOfCarManufacture(int Year);
	void SetCarColor(std::string Color);

	void SetYearOfTechnicalInspection(int* arr, int sizeArr);
	void SetCarOwners(const std::string* arr, int sizeArr);
	

	std::string GetCarModel();
	std::string GetCarColor();
	int GetYearOfCarManufacture();
	bool GetTestYearOfTechnicalInspection(int Year);

	int* GetYearOfTechnicalInspection();
	std::string* GetCarOwners();

	int GetSizeArrYearOfTechnicalInspection();
	int GetSizeArrCarOwners();
	
private:

	std::string CarModel;
	int YearOfCarManufacture;
	std::string CarColor;

	int* YearOfTechnicalInspection;
	std::string* CarOwners;


	int SizeArrayYearOfTechnicalInspection;
	int SizeArrayCarOwners;

	
};