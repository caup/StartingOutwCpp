//1.3 Flower Garden Size

#include <iostream>

using namespace std;

int main()
{
	int length,
		width,
		size;

	cout << "Enter the length in feet: ";
	cin >> length;
	cout << "Enter the width in feet: ";
	cin >> width;

	size = length * width;
	cout << "Size: " << size << " sqFt";
}