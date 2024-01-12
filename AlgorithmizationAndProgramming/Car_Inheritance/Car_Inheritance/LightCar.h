#pragma once
#include "Car.h"
#include "Counter.cpp"


class LightCar  :  public Car 
	
{
private:
	std::string BodyType;
	int EnginePower;


public:
	
	void SetBodyType(std::string BodyType);
	void SetEnginePower(int EnginePower);

	std::string GetBodyType();
	int GetEnginePower();

	
};

