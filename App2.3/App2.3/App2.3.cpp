// App2.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "malloc.h"
struct ll
{
	int data;
	ll *next;
};

ll* head;

void DeleteMiddleNode(ll* llhead)
{
	if ((llhead == NULL) || (llhead->next == NULL) ||(llhead->next->next == NULL))
		return;
	ll* onehop = llhead;
	ll* dbhop = llhead->next->next;
	while (dbhop != NULL)
	{
		if (dbhop->next != NULL)
		{
			dbhop = dbhop->next->next;
			onehop = onehop->next;
		}
		else
			break;
	}
	onehop->next = onehop->next->next;
}
int main()
{
	ll *tmp;
	int len = 20;
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

	DeleteMiddleNode(head);
    return 0;
}

