// Winning Division
#include <iostream>
#include <iomanip>
#include <string>

double getSales(std::string);
void findHighest(double [], std::string []);

int main()
{
	std::string divNames[4] = { "Northeast", "Southeast", "Northwest", "Southwest" };
	double divSales[4];
		
	for (int i = 0; i <= 3; i++)
	{
		divSales[i] = getSales(divNames[i]);
	}

	findHighest(divSales, divNames);

	return 0;
}

double getSales(std::string name)
{
	double sales;
	do
	{
		std::cout << "Enter the quarterly sales for the " << name << " division: ";
		std::cin >> sales;

	} while (sales < 0);

	return sales;
}

void findHighest(double arr[], std::string sarr[])
{
	double largest = 0;
	std::string name;
	int count = 0;

	while (count <= 3)
	{
		if (arr[count] > largest)
		{
			largest = arr[count];
			name = sarr[count];
		}

		count++;
	}
	
	std::cout << std::fixed << std::setprecision(2);
	std::cout << name << " with sales of $" << largest << std::endl;
}
