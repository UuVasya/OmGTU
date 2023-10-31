
//Лабораторная работа № 4. Вариант 10.

#include <iostream>
#include <string>
#include <fstream>

void foo1( double a)
{
	double x = -1.0;
	double dx = (a + 0.2) / 2.0;
	double res;
	std::cout << "\na = " << a << std::endl;
	while( ((-1) <= x) && (x <= 0) )
	{
		res = ((-1) * (x + 3 * a) * 2) - 2 * a;
		std::cout << "-(x + 3a)2 - 2a = " << res << std::endl;
		 x += dx;
	}
	while ((0 < x) && (x < 1))
	{
		res = (a * cos(x+3*a) * 2) - 3 * a;
		std::cout << "a cos(x + 3a) - 3a = " << res << std::endl;
		x += dx;
	}
	while (x == 1)
	{
		res = a * pow(exp(1),x);
		std::cout << "a e^x = " << res << std::endl;
		x += dx;
	}
}


int main() 
{
	double  a1 = 0.7, a2 = 1;
	
	foo1(a1);
	foo1(a2);
}