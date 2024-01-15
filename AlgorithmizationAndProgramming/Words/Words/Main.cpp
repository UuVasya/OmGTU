#include <iostream>
#include <string>


using namespace std;

int main() 
{
	string Word;
	getline(cin, Word);
	
	uint8_t Arr[255] = {};
	int a = 0;
	uint8_t MaxMinLength = 0;

	for (int i = 0; i < Word.length() - 2; i++) 
	{
		if ((Word[i] > Word[i + 1]) && (Word[i + 1] < Word[i + 2])) 
		{
			Arr[a] = Word[i + 1];
			a++;
		}
	}

	for (int i = 0; i < a-1; i++) 
	{
		if (MaxMinLength < (abs(Arr[i]-Arr[i+1])))
		{
			MaxMinLength = abs(Arr[i] - Arr[i + 1]);
		}
	
	}

	cout <<  "MaxMinLength = " << (int)MaxMinLength;
}