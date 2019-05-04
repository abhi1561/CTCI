// App2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "malloc.h"
struct ll
{
	int data;
	ll *next;
};
ll* head;

int GetIndexFromLast(ll* llhead, int index)
{
	if (llhead == NULL)
		return 0;
	llhead = llhead->next;
	int val = GetIndexFromLast(llhead, index);
	val++;
	if (val-1 == index)
		printf("Data at %d location from last in the linked list is %d\n", index, llhead->data);
	return val;
}
int main()
{
	int len = 10;
	ll * tmp;
	for (int i = 0; i < len; i++)
	{
		if (i == 0)
		{
			tmp = (ll*)malloc(sizeof(struct ll));
			tmp->data = i;
			head = tmp;
		}
		else
		{
			tmp->next = (ll*)malloc(sizeof(struct ll));
			tmp = tmp->next;
			tmp->data = i;
		}
	}
	tmp->next = NULL;
	GetIndexFromLast(head, 4);
	return 0;
}

