// App1.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "windows.h"
   
bool ChackIfPalindromPermutation(char *s)
{
	char alpha;
	ULONG check = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		alpha = s[i] - 'A';
		if ((check&(1 << alpha)) == 0)
			check = check | (1 << alpha);
		else
			check = check & (~(1 << alpha));
	}
	if (check == 0)
		return true;
	else if ((check & (check - 1)) == 0)
		return true;
	else
		return false;
}

int main()
{
	char *str = "AbhiihbAccfg";
	bool isPalindromPermutation = ChackIfPalindromPermutation(str);
	if (isPalindromPermutation)
	{
		printf("Yes it is a permutation of a palindrom\n");
	}
	else
	{
		printf("No it not a permutation of a palindrom\n");
	}
    return 0;
}

