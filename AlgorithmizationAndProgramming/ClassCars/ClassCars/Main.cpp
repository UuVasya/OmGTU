
#include<iostream>
#include <ctime>

#include"Car.h"

void print(Car& Object) 
{
	std::cout << "Model\t" << "Color\t" << "Year\t" << "YearT/O\t" << "Owners\t" << std::endl;

	std::cout << Object.GetCarModel() << '\t';
	std::cout << Object.GetCarColor() << '\t';
	std::cout << Object.GetYearOfCarManufacture() << '\t';

	int length = std::max(Object.GetSizeArrYearOfTechnicalInspection(), Object.GetSizeArrCarOwners());

	for (int i = 0; i < length; i++)
	{
		if(i)std::cout << "\t\t\t";

		if (i < Object.GetSizeArrYearOfTechnicalInspection()) { std::cout << Object.GetYearOfTechnicalInspection()[i] << '\t'; }
		else { std::cout << '\t';}
/*		
*/
		if (i < Object.GetSizeArrCarOwners()) { std::cout << Object.GetCarOwners()[i] << '\t'; }
		else { std::cout << '\t'; }
		
		std::cout << std::endl;
	}



	std::cout << std::endl;
}


int main() 
{
	srand(time(NULL));
	const int NemberOfCar = 10;
	int a;
	std::string Name[] { "Petya", "Vasya", "Andrey", "Pukin", "Chupkin", "Nikolay"};
	std::string CarModel[]{ "LADA", "GAZ", "KAMAZ", "BMW", "Audi", "Nissan" };
	std::string CarColor[10]{ "Green","Red" , "White", "Black", "Orange", "Purple", "Blue", "Pink", "Brown", "Gray"};

	std::string Owners[10];
	int TechnicalInspection[10]{ };


	std::string FineModel = CarModel[2];


	Car* ObjectCar = new Car[NemberOfCar];
	
	/// /////////////////////////////////////////////////////////////////////////////////////////////////

	for (int i = 0; i < NemberOfCar; i++)
	{
		int YearOfCarManufacture = (rand() % 100) + 1920;

		ObjectCar[i].SetCarModel(CarModel[rand() % 6]);
		ObjectCar[i].SetCarColor(CarColor[rand() % 10]);
		ObjectCar[i].SetYearOfCarManufacture(YearOfCarManufacture);
		
		a = rand() % 10;
		for (int j = 0; j < a; j++) 
		{
			Owners[j] = Name[rand() % 6];
		}
		ObjectCar[i].SetCarOwners(Owners,a);


		a = rand() % 10;
		for (int j = 0; j < a; j++)
		{
			YearOfCarManufacture += rand() % 10;
			if (YearOfCarManufacture > 2023) { a = j; break; }

			TechnicalInspection[j] = YearOfCarManufacture;
		}
		ObjectCar[i].SetYearOfTechnicalInspection(TechnicalInspection,a);


	}
	

	//////////////////////////////////////////////////////////////////////////////////

	//Fine for model

	for (int i = 0; i < NemberOfCar; i++) 
	{
		if(FineModel==ObjectCar[i].GetCarModel())
		print(ObjectCar[i]);
	}

	// For Year Manufacture

	for (int i = 0; i < NemberOfCar; i++)
	{
		if (1999 == ObjectCar[i].GetYearOfCarManufacture())
			print(ObjectCar[i]);
	}

	// T/O
	for (int i = 0; i < NemberOfCar; i++)
	{
		std::cout << "Car " << i + 1<<'\t';
		if (nullptr == ObjectCar[i].GetYearOfTechnicalInspection()) 
		{
			std::cout<<"NO_TechnicalInspection" << std::endl;
		}
		else 
		{
			std::cout << "YES_TechnicalInspection" << std::endl;
		}
	}








	//Object[0].SetCarOwners(Owners, sizeof(Owners) / sizeof(*Owners));
	//std::cout << sizeof(Owners) / sizeof(*Owners) <<std::endl;

	//ObjectCar[0].SetCarOwners(Owners);
	//std::cout << sizeof(tech) << std::endl;

	//ObjectCar[0].SetYearOfTechnicalInspection(TechnicalInspection);
	//ObjectCar[0].SetYearOfCarManufacture(545);
	//std::cout << ObjectCar[0].GetTestYearOfTechnicalInspection(1970);
}