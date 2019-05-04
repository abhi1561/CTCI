// App1.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>	
#include <stdio.h>
#include <stdlib.h>
using namespace std;

string CountRepeates(string S)
{
	char p, n,num;
	int count = 1;
	string B;
	p = S.at(0);
	for (int i = 1; i < S.length(); i++)
	{
		n = S.at(i);
		if (n != p)
		{
			itoa(count, &num,10);
			B.push_back(p);
			B.push_back(num);
			p = n;
			count = 1;
		}
		else
			  count++;
		if (i == S.length() - 1)
		{
			itoa(count, &num, 10);
			B.push_back(p);
			B.push_back(num);
			p = n;
			count = 1;
		}
	}
	if (S.length() == B.length())
	{
		return S;
	}
	else
	{
		return B;
	}
}
int main()
{
	string S1 = "ABBBDDD";
	string Final = CountRepeates(S1);
	printf("%s", Final.c_str());
    return 0;
}

