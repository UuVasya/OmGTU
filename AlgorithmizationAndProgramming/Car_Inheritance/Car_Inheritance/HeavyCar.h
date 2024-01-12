#pragma once
#include "Car.h"
#include <vector>

class HeavyCar :  public Car
{
private:
	int LiftingCapacity;
	static std::vector<HeavyCar*> MyCar;

public:
	HeavyCar();
	void SetLiftingCapacity(int LiftingCapacity);
	int GetLiftingCapacity();

	static int GetBestLiftingCapacityForTADADA(int Ves);
};

