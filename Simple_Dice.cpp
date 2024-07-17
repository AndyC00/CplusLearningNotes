#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include "Header.h"


class player
{
public:
	int dice1, dice2;
	int grade;
	std::string name;

	player(std::string playerName) : dice1(0), dice2(0), grade(0), name(playerName) {}

	void roll_dice()
	{
		if (name == "You")
		{
			dice1 = rand() % 6 + 1;
			dice2 = rand() % 6 + 1;
			grade = dice1 + dice2;
		}
		else //higher the chance to let AI win
		{
			dice1 = rand() % 4 + 3;
			dice2 = rand() % 4 + 3;
			grade = dice1 + dice2;
		}
	}
};

void simple_dice_game()
{
	int round = 0;
	char input = 1;

	while (input)
	{
		std::cout << "Please Enter Any Key to start, 0 to exit";
		std::cin >> input;
		
		// if player wants to quit
		if (input == '0')
		{
			break;
		}

		//swab the consequence every time
		player player1("You");
		player player2("The AI");

		if (round % 2 == 0)
		{
			std::swap(player1.name, player2.name);
		}

		//roll the dice
		player1.roll_dice();
		player2.roll_dice();

		//print out dice results
		std::cout << "The dice " << player1.name << " rolled are " << player1.dice1 << " and " << player1.dice2 << std::endl;
		std::cout << "The dice " << player2.name << " rolled are " << player2.dice1 << " and " << player2.dice2 << std::endl;

		if (player1.dice1 == player1.dice2 && player2.dice1 == player2.dice2)
		{
			if (player1.grade > player2.grade)
			{
				std::cout << player1.name << " win!" << std::endl;
			}
			else if (player1.grade == player2.grade)
			{
				std::cout << "The game draws. Try again!" << std::endl;
			}
			else
			{
				std::cout << player2.name << " win!" << std::endl;
			}
		}
		else if (player1.dice1 == player1.dice2 && player2.dice1 != player2.dice2)
		{
			std::cout << player1.name << " win!" << std::endl;
		}
		else if (player2.dice1 == player2.dice2 && player1.dice1 != player1.dice2)
		{
			std::cout << player2.name << " win!" << std::endl;
		}
		else
		{
			if (player1.grade > player2.grade)
			{
				std::cout << player1.name << " win!" << std::endl;
			}
			else if (player1.grade == player2.grade)
			{
				std::cout << "The game draws. Try again!" << std::endl;
			}
			else
			{
				std::cout << player2.name << " win!" << std::endl;
			}
		}
		round++;
	}
	return;
}
