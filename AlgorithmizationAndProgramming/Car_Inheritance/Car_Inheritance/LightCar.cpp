#include "LightCar.h"


void LightCar::SetBodyType(std::string BodyType)
{
	this->BodyType = BodyType;
}

void LightCar::SetEnginePower(int EnginePower)
{
	this->EnginePower = EnginePower;
}

std::string LightCar::GetBodyType()
{
	return BodyType;
}

int LightCar::GetEnginePower()
{
	return EnginePower;
}
