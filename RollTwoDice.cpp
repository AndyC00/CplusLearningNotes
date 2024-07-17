#include <iostream>
#include <cstdlib>
#include <ctime>

void RollTwoDice(int& a, int& b);

int main()
{
	// Seed the pseudo random number generate here.
	srand(int(time(0)));

	// Declare two local integers, representing the two dice. // Set each dice to hold a value of zero.
	int dice1 = 0, dice2 = 0;  

	// Print out the contents of the two dice. 
	std::cout << "Before rolling the number for the first dice is" << dice1 << std::endl;
	std::cout << "Before rolling the number for the second dice is" << dice2 << std::endl;

	// Call rollTwoDice with the local dice variables.
	RollTwoDice(dice1, dice2);

	// Print out the contents of the two dice after the call.
	std::cout << "After rolling the number for the first dice is" << dice1 << std::endl;
	std::cout << "After rolling the number for the second dice is" << dice2 << std::endl;

	return 0;
}
void RollTwoDice(int& a, int& b)
{
	a = rand() % 6 + 1;
	b = rand() % 6 + 1;
}
