//Using Vectors--String Selection Sort Modification
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::vector;
using std::string;

void readToArray(vector<string>&);
void strSelectionSort(vector<string>&);
void stringSwap(string&, string&);

int main()
{
	vector<string> name;

	readToArray(name);
	strSelectionSort(name);

	for (auto& i : name)
	{
		std::cout << i << '\n';
	}

	return 0;

}

void readToArray(vector<string>& vect)
{
	std::ifstream inputFile("names.dat");

	string first, last;
	while (inputFile >> first >> last)
	{
		string full = first + " " + last;
		vect.push_back(full);
	}

	inputFile.close();
}

void strSelectionSort(vector<string> &vect)
{
	int minIndex;
	string minValue;

	for (int start = 0; start < vect.size() - 1; start++)
	{
		minIndex = start;
		minValue = vect[start];
		for (int index = start + 1; index < vect.size(); index++)
		{
			if (vect[index] < minValue)
			{
				minValue = vect[index];
				minIndex = index;
			}
		}
		stringSwap(vect[minIndex], vect[start]);
	}
}

void stringSwap(string& a, string& b)
{
	string tmp = a;
	a = b;
	b = tmp;
}