//Using Files--Personal Web Page Generator
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ofstream outputFile;
	std::string name, description, title;

	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	std::cout << "Describe yourself: ";
	std::getline(std::cin, description);
	std::cout << "Enter a title for your web page: ";
	std::getline(std::cin, title);

	title.append(".html");

	outputFile.open(title);

	outputFile << "<html>\n<head>\n <title>" << title << "</title>\n</head>\n"
		<< "<body>\n <center>\n <h1>" << name << "</h1>\n </center>\n <hr>\n " << description
		<< " \n <hr>\n</body>\n</html>";

	outputFile.close();

	return 0;
}