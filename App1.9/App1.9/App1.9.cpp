// App1.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
using namespace std;

int main()
{
	string s = "waterbottle";
	string s2 = "lewaterbott";

	bool found = false;
	char ch = s.at(0);
	int j = 0;
	  
	for (int i = 0; i < s2.length(); i++)
	{
		if (ch == s2.at(i))
		{
			found = true;
			j = j + 1;
			ch = s.at(j);
		}
		else
		{
			found = false;
			j = 0;
			ch = s.at(j);
		}
	}
	if (found)
	{
		int checklength = s2.length() - j;
		string checkstring = s2.substr(0, checklength);
		if (s.find(checkstring)!=string::npos)
		{
			printf("The two strings are rotations of eachother\n");
		}
		else
		{
			printf("The two strings are not rotations of eachother\n");
		}
		
	}
    return 0;
}

