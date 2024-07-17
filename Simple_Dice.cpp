#include <cstdlib>
#include <iostream>
#include <iostream>
#include <string>
#include <ctime>

void WhichPlayer ();

int main()
{
	char input = 1;
	int round = 0;

	while (input)
	{
		std::cout << "Please Enter Any Key to start, 0 to exit";
		std::cin >> input;
		
		// if player wants to quit
		if (input == 0)
		{
			return 0;
		}
		
		//swab the consequence every time
		if (round % 2 == 0)
		{
			std::string player1 = "You";
			std::string player2 = "The AI";
		}
		else
		{
			std::string player1 = "The AI";
			std::string player2 = "You";
		}

		srand(int(time(0)));
		int Fdice1 = 0, Fdice2 = 0; //dices for player1
		int Sdice1 = 0, Sdice2 = 0; //dices for player2

		Fdice1 = rand() % 6 + 1;
		Fdice2 = rand() % 6 + 1;
		int total1 = Fdice1 + Fdice2;

		Sdice1 = rand() % 6 + 1;
		Sdice2 = rand() % 6 + 1;
		int total2 = Sdice1 + Sdice2;

		if (Fdice1 == Fdice2 || Sdice1 == Sdice2)
		{
			
		}
		else
		{
			
		}
	}
	return 0;
}

void WhichPlayer()
{
	
}