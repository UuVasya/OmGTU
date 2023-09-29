// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once
#include <iostream>

#include <string>

int main() {

	
	std::string a;
	std::getline(cin, a);
	std::cout << a;



	return 0;
}
//#include "TestLessen.h"

/*
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
*/
/*

int foo(int a, int b)
	{
		int c = a;
		a = b;
		b = c;
		return a, b;

	}

void main() 
{
	
	int a = 0xFF;
	int b = 9;
	

	

	std::cout << a<< b <<foo(a, b)<<std::endl;








}*/