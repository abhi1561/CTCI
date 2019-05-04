// App2.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "malloc.h"
struct ll
{
	int data;
	ll* next;
};
ll * head=NULL;

int main()
{
	int len = 5;
	ll* tmp;
	for (int i = 0; i < len; i++)
	{
		if (i == 0)
		{
			tmp = (ll*)malloc(sizeof(ll));
			tmp->data = i;
			head = tmp;
		}
		else
		{
			tmp->next = (ll*)malloc(sizeof(ll));
			tmp = tmp->next;
			tmp->data = i;
		}
		if ((i == 2) || (i == 4))
		{
			tmp->data = 7;
		}
	}
	tmp->next = NULL;
	ll *hptr = head;
	ll *tempptr ;
	ll *ptr;
	while (hptr != NULL)
	{
		ptr = hptr;
		tempptr = ptr->next;
		while (tempptr != NULL)
		{
			if (hptr->data == tempptr->data)
			{
				ptr->next = tempptr->next;
			}
			ptr = ptr->next;
			tempptr = tempptr->next;
		}
		hptr = hptr->next;
	}
    return 0;
}

