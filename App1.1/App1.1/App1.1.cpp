// App1.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <unordered_map>

using namespace std;

bool UniqueCharsInString(char *s)
{
	unordered_map <char, char> s_map;
	
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s_map.find(s[i]) == s_map.end())
			s_map[s[i]] = s[i];
		else
			return false;
	}
	return true;
}

bool CharsInStringBoolArray(char * s)
{
	bool char_map[256];
	char a;
	for (int i = 0; s[i] != '\0'; i++)
	{
		a = s[i];
		if (char_map[a] == true)
			return false;
		else
			char_map[a] = true;
	}
}

bool CharsInString(char* s)
{
	char a, b;
	int i=0,j=0;
	bool Unique=true;
	for (i=0; s[i]!='\0' ; i++)
	{
		a = s[i];
		for (j = i + 1; s[j]!='\0'; j++)
		{
			b = s[j];
			if (a == b)
			{
				Unique = false;
				break;
			}
		}
		if (Unique == false)
			break;
	}
	return Unique;
}

int main()
{
	char *string = "Abhimanyu";
	bool Unique = CharsInString(string);
	bool Unique2 = UniqueCharsInString(string);
	bool Unique3 = CharsInStringBoolArray(string);
	if (!Unique3)
		printf("Characters in the string are equal\n");
	else
		printf("Characters in the string are unique\n");
    return 0;
}

