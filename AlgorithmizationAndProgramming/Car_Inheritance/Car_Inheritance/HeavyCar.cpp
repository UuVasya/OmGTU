#include "HeavyCar.h"
#include<iostream>
std::vector<HeavyCar*> HeavyCar::MyCar;
HeavyCar::HeavyCar()
{
	MyCar.push_back(this);
	LiftingCapacity = 0;
}

void HeavyCar::SetLiftingCapacity(int LiftingCapacity)
{
	this->LiftingCapacity = LiftingCapacity;
}

int HeavyCar::GetLiftingCapacity()
{
	return LiftingCapacity;
}

int HeavyCar::GetBestLiftingCapacityForTADADA(int Ves)
{
	int a = 0,n=NULL;

	if (!HeavyCar::MyCar.size())return 110;
	for (size_t i = 0; i < HeavyCar::MyCar.size();i++)
	{
		if (a < HeavyCar::MyCar[i]->GetLiftingCapacity()) 
		{
			a = HeavyCar::MyCar[i]->GetLiftingCapacity();
			n = i;
		}	
	}

	a = Ves / a;
	if (Ves > (a* HeavyCar::MyCar[n]->GetLiftingCapacity()))
	{
		a++;
	}
	return a;
}

