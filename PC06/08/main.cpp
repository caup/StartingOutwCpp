// String Compare
#include <iostream>
#include <string>

using std::string;

string upperCaseIt(string s);
bool sameString(string s1, string s2);

int main()
{
	string name1, name2;
	bool isSame;

	std::cout << "Enter two first names: \n";
	std::cin >> name1 >> name2;

	isSame = sameString(name1, name2);

	if (!isSame)
	{
		std::cout << "The names are not the same.\n";
	}
	else
	{
		std::cout << "The names are the same!\n";
	}

	return 0;
}

string upperCaseIt(string s)
{
	for (int i = 0, n = s.length(); i < n; i++)
	{
		s[i] = toupper(s[i]);
	}

	return s;
}

bool sameString(string s1, string s2)
{
	string first = upperCaseIt(s1),
		second = upperCaseIt(s2);

	if (first == second)
	{
		return true;
	}
	else
	{
		return false;
	}
}
