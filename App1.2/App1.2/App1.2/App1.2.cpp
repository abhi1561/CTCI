// App1.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
using namespace std;

bool CheckIfIsAPermutation(string str1, string str2)
{
	int charpresent[256] = { 0 };
	if (str1.length() != str2.length())
		return false;
	
	for (int i = 0; i < str1.length(); i++)
	{
		charpresent[str1.at(i)]++;
	}
	for (int j = 0; j < str2.length(); j++)
	{
		charpresent[str2.at(j)]--;
		if(charpresent[str2.at(j)] < 0)
			return false;
	}
	
	return true;
}
int main()
{
	string str1 = "Abhimanyu";
	string str2 = "uynamibjA";
	bool IsAPermutation = CheckIfIsAPermutation(str1, str2);
	if (IsAPermutation)
		printf("The second string is a permutation of the first one\n");
	else
		printf("The second string is a not a permutation of the first one\n");
	return 0;
}

