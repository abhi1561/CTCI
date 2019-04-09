// App1.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void UrllyfyString(char *string,int len)
{
	char *ptr_f = string;
	char *ptr_b = string+len-1;
	char *temp;
	char current;
	while (ptr_f != ptr_b)
	{
		char current = *ptr_f;
		if (current != ' ')
		{
			ptr_f++;
			continue;
		}
		temp = ptr_b;
		ptr_b = ptr_b + 2;
		for (char *i = ptr_b; i > ptr_f ; i--)
		{
			*i = *temp;
			temp--;
		}
		*ptr_f++ = '%';
		*ptr_f++ = '2';
		*ptr_f++ = '0';
	}
}

void UrllyfyString2(char *string, int len)
{
	char *ptr = string;
	int whitespace = 0;
	int final_length;
	for (int i = len-1; i>=0; i--)
	{
		if (ptr[i] == ' ')
			whitespace++;
	}
	final_length = len + (whitespace * 2);
	string[final_length] = '\0';
	for (int i = len - 1; i >= 0; i--)
	{
		if (string[i] == ' ')
		{
			string[--final_length] = '0';
			string[--final_length] = '2';
			string[--final_length] = '%';
		}
		else
			string[--final_length] = string[i];

	}
}

int main()
{
	char string[19] = "My Holy Mother    ";
	char string2[19] = "My Holy Father    ";
	int len = 14;
	UrllyfyString(string,len);
	printf("New String is %s\n", string);
	UrllyfyString2(string2, len);
	printf("New String is %s\n", string2);
    return 0;
}

