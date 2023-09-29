
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Return()
{
	fstream fin("Return.txt", ios::out);
	fin << "Возвращение лучшего:";
	fin.close();
}

int ReadFile()
{

	std::string line;
	std::fstream in("1.txt", ios::in);
	if (in.is_open())
	{
		std::cout << "Read_OK" << std::endl;
	}
	else
	{
		std::cout << "Read_NO_OK" << std::endl;
		return -1;
	}

	std::getline(in, line);
	int NumberOfSuppliers = stoi(line);
	//cout << line << std::endl;
	

	for (int i=0;i< NumberOfSuppliers;i++)
	{
		int a;
		float ab;
           

			for (int j= 0;j<6;j++)
			{
				std::getline(in, line,' ');
				a = stoi(line);

			    std::cout << a << std::endl;
			}
			//for (int j = 0; j < 2; j++)
		//	{
				std::getline(in, line,' ');
				ab = stof(line);
				std::cout << ab << std::endl;
				std::getline(in, line, '\n');
				ab = stof(line);
				std::cout << ab << std::endl;
			//}

	}
	
	in.close();

}


int main()
{
	setlocale(LC_ALL, "rus");
	ReadFile();


	Return();
}