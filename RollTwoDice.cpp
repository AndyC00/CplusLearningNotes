#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Header.h"

void roll_two_dice()
{
	// Declare two local integers, representing the two dice. // Set each dice to hold a value of zero.
	int dice_1 = 0, dice_2 = 0;  

	// Print out the contents of the two dice. 
	std::cout << "Before rolling the number for the first dice is" << dice_1 << std::endl;
	std::cout << "Before rolling the number for the second dice is" << dice_2 << std::endl;

	// Call rollTwoDice with the local dice variables.
	RollTwoDice(dice_1, dice_2);

	// Print out the contents of the two dice after the call.
	std::cout << "After rolling the number for the first dice is" << dice_1 << std::endl;
	std::cout << "After rolling the number for the second dice is" << dice_2 << std::endl;

	return;
}
void RollTwoDice(int& a, int& b)
{
	a = rand() % 6 + 1;
	b = rand() % 6 + 1;
}
