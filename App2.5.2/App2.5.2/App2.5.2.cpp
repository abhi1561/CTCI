// App2.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include<iostream>
using namespace std;
class ll
{
public:
	int data;
	ll* next;
	ll()
	{
		data = rand()&0x7;
		next = NULL;
	}

	void print(ll* tmp)
	{
		printf("Linked List %x:", tmp);
		while (tmp != NULL)
		{
			cout << tmp->data << "\t";
			tmp = tmp->next;
		}
		printf("\n");
	}
};
ll* head1;
ll* head2;
ll* resulthead;

int GenerateResultll(ll* l1, ll* l2)
{
	int sum;
	int carry = 0;
	ll * result;
	if ((l1 == NULL) && (l2 == NULL))
	{
		return 0;
	}
	carry = GenerateResultll(l1->next,l2->next);
	if (l1 == NULL)
	{
		sum = (l2->data + carry);
	}
	else if (l2 == NULL)
	{
		sum = (l2->data + carry);
	}
	else
	{
		sum = (l1->data + l2->data + carry);
	}
	if (sum >= 10)
	{
		carry = sum / 10;
		sum = sum % 10;
	}
	else
		carry = 0;
	result = resulthead;
	resulthead = new ll();
	resulthead->data = sum;
	resulthead->next = result;
	return carry;
}
int main()
{
	ll* l1;
	ll* l2;
	for (int i = 0; i < 4; i++)
	{
		if (i == 0)
		{
			l1 = new ll();
			l2 = new ll();
			head1 = l1;
			head2 = l2;
		}
		else
		{
			l1->next = new ll();
			l2->next = new ll();
			l1 = l1->next;
			l2 = l2->next;
		}
	}
	int carry = GenerateResultll(head1, head2);
	if (carry)
	{
		l1 = resulthead;
		resulthead = new ll();
		resulthead->data = carry;
		resulthead->next = l1;
	}

	head1->print(head1);
	head2->print(head2);
	resulthead->print(resulthead);
    return 0;
}

