#include<iostream>
//#include<string>
#include "Car.h"

#include "HeavyCar.h"
#include "LightCar.h"






int main() 
{

	LightCar a;
	a.SetBodyType("fggghfdfg");
	
	std::cout << HeavyCar::GetBestLiftingCapacityForTADADA(1601);
	HeavyCar b;
	HeavyCar c;
	b.SetLiftingCapacity(800);
	c.SetLiftingCapacity(700);
	
	std::cout << HeavyCar::GetBestLiftingCapacityForTADADA(1601);

}