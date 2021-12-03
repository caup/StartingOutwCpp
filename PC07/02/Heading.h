#pragma once
#include <string>

class Heading
{
private:
	std::string companyName,
				reportName;

public:
	Heading(std::string cN = "ABC Industries", std::string rN = "Report")
	{ companyName = cN; reportName = rN; }

	void oneLine();
	void fourLine();
};

