

#include <iostream>
#include <string>







int main()
{
	setlocale(LC_ALL, "Rus");

	int Element1, Element0=0x7FFFFFFF;
	int ValNull = 0x7FFFFFFF, VN = 0;
	std::string sVNull = "Ещё нет нулей",sVN = "Ещё нет нулей";
	int MaxPosl = 0, MP = 0;
	int MaxRising = 0, MR = 0;

	std::string Six = "НЕ все элементы (+), кратны 2 и оканчиваются на 6";
	bool bSix = true;

	do
	{
		std::cin >> Element1;
		
		//Поиск Минимальной последовательности нулей
		if (Element1 == 0) 
		{
			VN++;
			sVN = std::to_string(VN);
			if (ValNull>VN)
			{
				sVNull = std::to_string(VN);
			}
		}
		else
		{
			if (VN)
			{
				ValNull = std::min(ValNull, VN);
				VN = 0;
				sVN = std::to_string(VN);
			}
		}


		//Поиск Максимальной Положительной последовательности 
		if (Element1 > 0)
		{
			MP++;
			if (MaxPosl < MP)
			{
				MaxPosl = MP;
			}
		}
		else
		{
			if (MP)
			{
				MaxPosl =std::max(MaxPosl,MP);
				MP = 0;
			}
		}


		//Поиск Максимальной Возврастающей последовательности 
		if (Element1 > Element0)
		{
			if (!MR) { MR ++; }
			MR++;
			if (MaxRising < MR)
			{
				MaxRising = MR;
			}
		}
		else
		{
			if (MR)
			{
				MaxRising = std::max(MaxRising, MR);
				MR = 0;
			}
		}


		//4444444444444444444444444444444444444444444444444444
		if (bSix)
		{
			if ((Element1 > 0) && (!(Element1 % 2)) && (6 == (Element1 % 10)))
			{

				Six = "Пока что все элементы (+), кратны 2 и оканчиваются на 6";
			}
			else
			{
				bSix = false;
				Six = "НЕ все элементы (+), кратны 2 и оканчиваются на 6";
			}
		}

		if (ValNull!=0x7FFFFFFF)
		{
			sVNull = std::to_string(ValNull);
		}

	
		std::cout << "1.Min Посл.(NULL)Элементов Было: " << sVNull << "\tСейчас: " << sVN << std::endl;

		std::cout << "2.Max Посл. (+)  Элементов Было: " << MaxPosl << "\tСейчас: " << MP << std::endl;
		
		std::cout << "3.Max Возврастающая последовательность: " << MaxRising << "\tСейчас: " << MR << std::endl;
		
		std::cout << Six << std::endl;


		Element0 = Element1;

	} while (1);






}