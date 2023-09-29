
#include <iostream>
#include <string>
//#include <math.h>





int main() 
{
	int MaxNumber = 0;
	int MaxNumber3 = 0;
	int MinDifNum1 = 0;
	int MinDifNum2 = 0;
	int a;
	int Quantity1 = 0;
	int number1=0, number2=0;
	


	do {
	std::cin >> number1;
	std::cin >> number2;
		
		MaxNumber+=std::max(number1, number2);
	a=std::abs(number1 - number2);
	switch (a%3)
	{

	case 1:
		if (MinDifNum1 == 0) MinDifNum1 = a;
		if (MinDifNum1 > a) MinDifNum1 = a;
		Quantity1++;
		break;
	case 2:
		if (MinDifNum2 == 0) MinDifNum2 = a;
		if (MinDifNum2 > a) MinDifNum2 = a;
		break;

	//default:
	}

	switch (MaxNumber % 3)
	{
	case 0:
		MaxNumber3 = MaxNumber;
		break;
	case 1:
		if (MinDifNum1 != 0)
		MaxNumber3 = MaxNumber - MinDifNum1;
		break;
	case 2:
		if (MinDifNum2 != 0)
		MaxNumber3 = MaxNumber - MinDifNum2;
		else {
		if (Quantity1 >= 2)
		{
			MaxNumber3 = MaxNumber - 2;
		}
		}
		break;	
	}

	/*if (MaxNumber % 3) {
		if ((MaxNumber - MinDifNum1) % 3) {
			MaxNumber3 = MaxNumber - MinDifNum1;
		}else{
		if ((MaxNumber - MinDifNum2) % 3) {
			MaxNumber3 = MaxNumber - MinDifNum2;
		}else{ MaxNumber3 = MaxNumber; }
		
		}
	}
	else { MaxNumber3 = MaxNumber; }
*/




	std::cout <<"Max%3 = " << MaxNumber3 << std::endl;
//	std::cout << MinDifNum1 << std::endl;
//	std::cout << MinDifNum2 << std::endl;

	} while (number1);
	
	
	



}


