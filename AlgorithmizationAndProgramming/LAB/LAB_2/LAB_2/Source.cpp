
//Лабораторная работа № 2. Вариант 10.

#include <iostream>
#include <string>









int main()
{
	double x = 0, y = 0, a = 1, b = 3;
	std::string s;
	

	while (1) {
		std::cout << "Enter a value = ";
		std::cin >> s;

		x = stod(s);

		if (x < 0 || x > 4)
		{
			std::cout << "Enter a value from 0 to 4" << std::endl;
		}
		else
		{
			if (x < 2.3)
			{
				y = pow(exp(1), (-1) * b * x) * sin(b * x);
			}

			if (2.3 <= x < 3)
			{
				y = cos(b * x);
			}

			if (x >= 3)
			{
				y = pow(exp(1), (-1) * a * x) * cos(b * x);
			}

			std::cout <<"y = "<< y << std::endl;
		}

	}
}