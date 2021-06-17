/* Flash Drive Price
An electronics company makes 64 gigabyte USB flash drives that cost them $8.00 apiece to produce.
Write a program to determine how much the company should sell them for if it wants to make a 35 percent
profit. Display the result on the screen. */

#include <iostream>

int main()
{
	double profitPrice = 8.00 * 1.35;

	std::cout << "35% profit on $8 requires sale price of: $" << profitPrice;
}