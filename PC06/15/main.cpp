// Order Status
#include <iostream>
#include <iomanip>

void getOrderDetails(double& sh, int& so, int& ss);
void calcOrder(int so, int ss, double sh);

int main()
{
	int numOrdered, numStock;
	double specialShipping;

	getOrderDetails(specialShipping, numOrdered, numStock);
	calcOrder(numOrdered, numStock, specialShipping);

	return 0;
}

void getOrderDetails(double& sh, int& so, int& ss)
{
	std::cout << "Number of spools ordered: ";
	std::cin >> so;
	std::cout << "Number of spools in stock: ";
	std::cin >> ss;
	std::cout << "Additional shipping charge: ";
	std::cin >> sh;
}

void calcOrder(int so, int ss, double sh = 10)
{
	int backorder, ready = so;
	if (so > ss)
	{
		backorder = so - ss;
		ready = ss;
		std::cout << "ITEMS ON BACKORDER: " << backorder << "\n";
	}

	double subtotal = static_cast<double>(ready) * 100,
		   shipping = sh * ready,
		   total = subtotal + shipping;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Spools ready to ship: " << ready << "\n";
	std::cout << "Subtotal: $" << subtotal << "\n";
	std::cout << "Shipping: $" << shipping << "\n";
	std::cout << "Total:    $" << total;
}
