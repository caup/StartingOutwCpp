#include "Product.h"
#include <iostream>

Product::Product()
{
	name = "";
	quantity = 0;
}

Product::Product(std::string s, int q)
{
	name = s;
	quantity = q;
}

Product::~Product()
{
}

std::string Product::getSalsaName()
{
	return name;
}

void Product::setJarsSold()
{
	std::cin >> quantity;
}

int Product::getQuantity()
{
	return quantity;
}
