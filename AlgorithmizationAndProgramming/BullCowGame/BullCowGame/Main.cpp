#include <iostream>
#include <string>
#include <ctime>

int NUMBER_OF_LETTERS = 4;

bool AskToPlayAgain();
void Intro();
void game(std::string word);
std::string Random();
int NumberOfAttempts = NUMBER_OF_LETTERS*2 ;

int main()
{
	srand(time(NULL));
	Intro();

	do
	{	
		game(Random());

	} while (AskToPlayAgain());

	return 0;
}

void game(std::string word)
{


	for (char i = 0; i < NumberOfAttempts; i++)
	{
		int Bull = 0;
		int Cow = 0;
		std::cout << "Enter your guess:";
		std::string words = "";
		std::getline(std::cin, words);


		for (int a = 0; a < NUMBER_OF_LETTERS; a++)
		{
			if (word[a] == words[a])
			{
				Bull++; Cow--;
			}


			for (int b = 0; b < NUMBER_OF_LETTERS; b++)
			{
				if (word[a] == words[b])
				{
					Cow++;
				}
			}
		}

		std::cout << "Bull = " << Bull << std::endl;
		std::cout << "Cow = " << Cow << std::endl;
		if (Bull == NUMBER_OF_LETTERS) 
		{
			std::cout << "YOU WIN\n";
			return;
		}
	}
	std::cout << "You failed to guess my word\n";
}
void Intro()
{
	std::cout << "Hi, go to game \"Bull & Cow\"" << std::endl;
	std::cout << "How can i contact you?\t";
	std::string yourname = "";
	std::getline(std::cin, yourname);
	//std::cout << yourname << " How many characters will we guess? ";
	//std::string a;
	///std::getline(std::cin, a);
//	NUMBER_OF_LETTERS = std::stoi(a);
	std::cout << yourname << " go to play!\n";
	std::cout << "I made a five letter word\n";
}

bool AskToPlayAgain()
{
	
	std::cout << "Wanna try again?(Yes or No) ";
	std::string response = "";
	std::getline(std::cin, response);
	std::cout << std::endl;
	return (response[0] == 'y') || (response[0] == 'Y');
};

std::string Random() 
{
	int a = rand() % 10000;
	std::string word = std::to_string(a);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == j) { continue; }
			if (word[i] == word[j]) { return Random(); }
		}
	}
	return word;
}