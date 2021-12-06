#include "CharConverter.h"

std::string CharConverter::uppercase(std::string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (isalpha(s[i]))
		{
			s[i] = toupper(s[i]);
		}
	}
	return s;
}

std::string CharConverter::properWords(std::string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (i == 0 && isalpha(s[i]))
		{
			s[i] = toupper(s[i]);
		}
		if (isspace(s[i]) && isalpha(s[++i]))
		{
			s[i] = toupper(s[i]);
		}
	}
	return s;
}
