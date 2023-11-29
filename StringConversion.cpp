// Lab07-User-Defined-String-Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author:		Angel Zaldivar
//Goal:			Conversion of strings etc.

#include <iostream>
#include<iomanip>
#include <string>
#include <cctype>

using namespace std;
//protocolles

string strLowerCase(string fullName);

string strUpperCase(string fullName);

string strPropperCase(string fullname);

string strCaseSelector(string fullName, char caseType);

string strTrim(string str);


int main()
{
	string fullName;

	strLowerCase("hoMEr siMPson");

	cout << endl;

	strUpperCase("hoMEr siMPson");

	cout << endl;

	strPropperCase("hoMEr siMPson");

	cout << endl;

	strCaseSelector("hoMEr siMPson", 'P');

	cout << endl;

	strCaseSelector("hoMEr siMPson", 'U');

	cout << endl;

	strCaseSelector("hoMEr siMPson", 'L');

	cout << endl;
	

	cout << "[" << strTrim("    Homer   Simpson    ") << "]" << endl;

	cout << "[" << strTrim(" Homer Simpson ") << "]" << endl;

	cout << "[" << strTrim("    ") << "]" << endl;

	cout << "[" << strTrim("") << "]" << endl;


}

string strLowerCase(string fullName)
{
	for (int i = 0; i < fullName.length(); i++)
	{
		char x;
		x = fullName[i];

		cout << (char)tolower(x);
	}

	return fullName;
}

string strUpperCase(string fullName)
{
	for (int i = 0; i < fullName.length(); i++)
	{
		char y;

		y = fullName[i];

		cout << (char)toupper(y);
	}
	return fullName;
}

string strPropperCase(string fullName)
{

	for (int i = 0; i < fullName.length(); i++)
	{
		char c = fullName[i];

		if (isupper(c) && isalpha(c))
		{
			c = tolower(c);

			fullName[i] = c;
		}
	}

	fullName[0] = toupper(fullName[0]);

	for (int i = 0; i < fullName.length(); i++)
	{
		char c = fullName[i];

		if (c == ' ')
		{
			i++;

			char c = fullName[i];

			c = toupper(c);

			fullName[i] = c;

		}
	}

	cout << fullName;
	

	return fullName;

}

string strCaseSelector(string fullName, char caseType)
{

	if (caseType == 'U')
	{
		for (int i = 0; i < fullName.length(); i++)
		{
			char y;

			y = fullName[i];

			cout << (char)toupper(y);
		}
	}

	else if(caseType == 'L')
	{
		for (int i = 0; i < fullName.length(); i++)
		{
			char c;

			c = fullName[i];

			cout << (char)tolower(c);
		}
	}

	else
	{
		for (int i = 0; i < fullName.length(); i++)
		{
			char c = fullName[i];

			if (isupper(c) && isalpha(c))
			{
				c = tolower(c);

				fullName[i] = c;
			}
		}

		fullName[0] = toupper(fullName[0]);

		for (int i = 0; i < fullName.length(); i++)
		{
			char c = fullName[i];

			if (c == ' ')
			{
				i++;

				char c = fullName[i];

				c = toupper(c);

				fullName[i] = c;

			}
		}

		cout << fullName;
	}

		return fullName;
	
}

string strTrim(string str)
{
	/*string trimmedStr = "";

	bool leftWhitespace = true;

	bool rightWhitespace = false;

	for (int i = 0; i < str.length(); i++) {
		char c = str[i];

		if (leftWhitespace && c == ' ') {

			continue;
		}
		else if (!leftWhitespace && c == ' ') {
			rightWhitespace = true;
		}
		else if (rightWhitespace && c == ' ') {
		
			continue;
		}
		else {
			if (!leftWhitespace && rightWhitespace) {
				trimmedStr += ' ';
				rightWhitespace = false;
			}
			trimmedStr += c;
			leftWhitespace = false;
		}
	}*/

	string trimmedStr = "";

	int count = 0;

	char c;
	for (int i = 0; i < str.length(); i++)
	{
		
		c = str.at(i);

		if (i == 0)
		{
			while (c == ' ')
			{
				i++;
				if (i == str.length())
				{
					return trimmedStr;
				}
				c = str.at(i);
			}
		}
		if (c == ' ')
		{
			count++;
			if (count == 2)
			{
				return trimmedStr;
			}
			while (c == ' ')
			{
				i++;
				trimmedStr += c;
				c = str.at(i);
			}
		}
		trimmedStr += c;

	}

	return str;
}
