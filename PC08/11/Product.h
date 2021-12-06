#pragma once
#include <string>

class Product
{
public:
	Product();
	Product(std::string s, int q);
	~Product();

	std::string getSalsaName();
	void setJarsSold();
	int getQuantity();

private:
	std::string name;
	int quantity;
};

