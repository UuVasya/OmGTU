#include <iostream>
#include <string>

#include <windows.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string Vvod;
	bool a = true;

	getline(cin, Vvod);
	int leght = Vvod.size();
	char ha = 32;
	int leghtTwo = 0;

	for (int j=leght-1, i = 0; i <= j; i++, j--)
	{
		while (Vvod[i] == ' ') i++;
		while (Vvod[j] == ' ') j--;

		if (Vvod[i] != Vvod[j]) 
		{
			if ((Vvod[i] <= 'Z') || (Vvod[i] <= 'Я'))
			{
				if ((Vvod[i] + ha) != Vvod[j]) { a = false; break; }
			}
			else
			if ((Vvod[j] <= 'Z') || (Vvod[j] <= 'Я'))
			{
				if ((Vvod[j] + ha) != Vvod[i]) { a = false; break; }

			}
			else a = false; break;
		}
	}
	while (leght)
	{
		leght--;
		switch (Vvod[leght])
		{
			case '2': {leghtTwo += 2; } break;
			case '4': {leghtTwo += 4; } break;
			case '6': {leghtTwo += 6; } break;
			case '8': {leghtTwo += 8; } break;
		}
	}

	if (a)
	{
		cout << "Полиндром" << endl;
	}	
	else
	{
		cout << "Не полиндром" << endl;
	}
	cout << "Сумма четных символов = "<< leghtTwo <<endl;
}