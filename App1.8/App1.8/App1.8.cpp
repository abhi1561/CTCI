// App1.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int mat[4][3];
	int k = 1;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mat[i][j] = k++;
			printf("%d   ", mat[i][j]);
		}
		printf("\n");
	}
	mat[3][1] = 0;
	mat[0 ][1] = 0;
	int row[4] = { 0 };
	int column[3] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (mat[i][j] == 0)
			{
				row[i] = 1;
				column[j] = 1;
			}

		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((row[i] == 1) || (column[j] == 1))
			{
				mat[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}

