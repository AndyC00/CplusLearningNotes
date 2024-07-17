#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Header.h"

int main()
{
	// Seed the pseudo random number generate here.
	srand(int(time(0)));

	roll_two_dice();

	simple_dice_game();

	return 0;
}