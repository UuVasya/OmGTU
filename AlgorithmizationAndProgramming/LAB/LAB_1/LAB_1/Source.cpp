
//Лабораторная работа № 1. Вариант 10.

#include <iostream>
#include <string>
#include <cmath>



void foo(double x,double a,double b,double c,double &w) 
{

	w = (a * x + (pow(2, (-1) * x) * cos(b * x)))
		/
		(b * x - pow(exp(1), -1 * x) * sin(b * x) + c);

}


int main() 
{

	double x = 1, a = 0.5, b = 2.9, c = 1.5, w = 0;

	//foo(x, a, b, c, w);
	std::string v;


	std::cout << "Enter the number x = ";
	std::cin >> v;
	x = stod(v);

	std::cout << "Enter the number a = ";
	std::cin >> v;
	a = stod(v);

	std::cout << "Enter the number b = ";
	std::cin >> v;
	b = stod(v);

	std::cout << "Enter the number c = ";
	std::cin >> v;
	c = stod(v);


	//std::cout << w << std::endl;

	foo(x, a, b, c, w);

	std::cout <<"w = " << w;



}