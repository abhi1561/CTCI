// App2.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "malloc.h"
#include <cstdlib>
using namespace std;

struct ll
{
	int data;
	ll* next;
};

ll* head;

void Printll()
{
	ll* llptr = head;
	while (llptr != NULL)
	{
		printf("%d\n", llptr->data);
		llptr = llptr->next;
	}
}

void Partitionll(int val)
{
	ll* g = head;
	ll* l = head;
	int tmp;
	while (g->next != NULL)
	{
		if (l->data < val)
		{
			l = l->next;
			g = g->next;
		}
		else
		{
			g = g->next;
			if (g->data < val)
			{
				tmp = g->data;
				g->data = l->data;
				l->data = tmp;
				l = l->next;
			}
		}
	}
}
int main()
{
	int len = 50;
	ll* tmp;
	for (int i = 0; i < len; i++)
	{
		if (i == 0)
		{
			tmp = (ll*)malloc(sizeof(struct ll));
			tmp->data = rand();
			head = tmp;
		}
		else
		{
			tmp->next = (ll*)malloc(sizeof(struct ll));
			tmp = tmp->next;
			tmp->data = rand();
			tmp->next = NULL;
		}
	}
	Printll();
	tmp = head;
	for (int i = 0; i < (len/2); i++)
	{
		tmp = tmp->next;
	}
	int partitionval = tmp->data;
	printf("Partition data value %d\n", partitionval);
	Partitionll(partitionval);
	Printll();
    return 0;
}

