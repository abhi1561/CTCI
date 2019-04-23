// App1.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
using namespace std;

bool FindOut(string s1, string s2, int len1, int len2)
{
	int count[255] = { 0 };
	char ch;
	int oneoff = 0;
	if(len1==len2)
	{ }
	else
	{
		if (len1 > len2)
		{
			if (len2 != (len1 - 1))
			{
				return false;
			}
		}
		else
		{
			if (len1 != (len2-1))
			{
				return false;
			}
		}
	}
	// if you reached here means the strings can be related
	for (int i = 0; i < s1.length(); i++)
	{
		ch = s1.at(i);
		count[ch]++;
	}
	for (int i = 1; i < s2.length(); i++)
	{
		ch = s2.at(i);
		count[ch]--;
		if (count[ch] < 0)
			oneoff++;
	}

	if (oneoff == 1)
		return true;
	else
		return false;
}
int main()
{
	string s1, s2;
	s1 = "Abhimanyu";
	s2 = "Abhanmiukyp";
	int s1Len = s1.length();
	int s2Len = s2.length();
	bool isTrue = FindOut(s1, s2, s1Len, s2Len);
	if (isTrue)
	{
		printf("The two strings are only one char apart(deleted,added,replaced)\n");
	}
	else
	{
		printf("The two strings are not only one char apart(deleted,added,replaced)\n");
	}
    return 0;
}

