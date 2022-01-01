//Using Files--Birthday Look Up
#include <iostream>
#include <fstream>
#include <string>

using std::string;

const int SIZE = 10;

struct Party {
	string name;
	string birthday;
};

void readData(Party[]);
void sortData(Party[]);
void swap(string&, string&, string&, string&);
void displayList(Party[]);
string FindBDay(Party[], string);

int main()
{
	Party time[SIZE]{};

	readData(time);
	sortData(time);
	displayList(time);

	string input;
	std::cout << "Enter the name of the person whose birthday you want to find:\n";
	std::getline(std::cin, input);
	std::cout << FindBDay(time, input);

	return 0;
}

void readData(Party arr[])
{
	std::ifstream inputFile("birthdays.dat");
	for (int i = 0; i < SIZE; i++)
	{
		string first, last;

		inputFile >> first >> last;
		arr[i].name = first + " " + last;

		inputFile >> arr[i].birthday;

	}
	inputFile.close();
}

void sortData(Party arr[])
{
	int minIndex;
	string minValue;

	for (int start = 0; start < SIZE - 1; start++)
	{
		minIndex = start;
		minValue = arr[start].name;
		for (int index = start + 1; index < SIZE; index++)
		{
			if (arr[index].name < minValue)
			{
				minValue = arr[index].name;
				minIndex = index;
			}
		}
		swap(arr[minIndex].name, arr[start].name,
			arr[minIndex].birthday, arr[start].birthday);
	}
}

void swap(string& aName, string& bName, string& aDate, string& bDate)
{
	string tmp = aName;
	aName = bName;
	bName = tmp;

	tmp = aDate;
	aDate = bDate;
	bDate = tmp;
}

void displayList(Party arr[])
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i].name << '\n';
	}
}

string FindBDay(Party arr[], string value)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i].name == value)
		{
			return arr[i].birthday;
		}
	}
	return "No matches for that name.";
}
