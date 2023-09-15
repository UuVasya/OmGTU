// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TestLessen.h"



class Animal
{
public:
	virtual void MakeNoise()
	{
		std::cout << "Noise" << std::endl;
	};
};


class Dog : public Animal
{
	void MakeNoise() override
	{
		std::cout << "Dog" << std::endl;
	};
};


class Cat : public Animal
{
	void MakeNoise() override
	{
		std::cout << "Cat" << std::endl;
	};
};


void Strok(Animal *f) 
{
	f->MakeNoise();

}

int main()
{
	Dog Dog;
	Cat Cat;
	Animal Animal;

	Strok(&Dog);
	Strok(&Cat);
	Strok(&Animal);
	int a = 5;
	int b = 10;
	int c = 4;
	foo2(a, b, c);






}


