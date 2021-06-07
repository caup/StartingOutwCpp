/* Basketball Player Height
The star player of a high school basketball team is 75 inches tall. Write a program to compute and display
the height in feet/inches form.
Hint: Try using the modulus and integer divide operations. */
#include <iostream>

int main()
{
	int ft = 75 / 12,
		in = 75 % 12;

	std::cout << ft << " ft and " << in << " inches";
}