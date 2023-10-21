
//Лабораторная работа № 3. Вариант 10.

#include <iostream>
#include <string>






int main() 
{
	double x, n,Y=1;
	std::string s;

		std::cout << "Enter a value x = ";
		std::cin >> s;
		x = stod(s);

		std::cout << "Enter a value n = ";
		std::cin >> s;
		n = stod(s);
		for (int i = 1; i <= n; i++)
		{
			Y += (pow(x, i) / (2.0 * i));


		}
		std::cout << "Y = " << Y << std::endl;

}



