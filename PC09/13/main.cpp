//Using Files--Birthday List
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

int main()
{
	Party time[SIZE]{};

	readData(time);
	sortData(time);
	displayList(time);
	
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
		minValue = arr[start].birthday;
		for (int index = start + 1; index < SIZE; index++)
		{
			if (arr[index].birthday < minValue)
			{
				minValue = arr[index].birthday;
				minIndex = index;
			}
		}
		swap(arr[minIndex].birthday, arr[start].birthday,
			 arr[minIndex].name, arr[start].name);
	}
}

void swap(string &aDate, string &bDate, string &aName, string &bName)
{
	string tmp = aDate;
	aDate = bDate;
	bDate = tmp;

	tmp = aName;
	aName = bName;
	bName = tmp;
}

void displayList(Party arr[])
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i].name << '\n'
				  << arr[i].birthday << '\n';
	}
}
