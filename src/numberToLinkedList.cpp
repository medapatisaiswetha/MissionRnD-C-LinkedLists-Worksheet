/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node
{
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N)
{
	struct node *head=NULL, *prev=NULL, *n;
	
	int i = 0;
	int a[20];
	if (N == 0)
	{
		a[i] = N;
		i++;
	}
	if (N < 0)
	{
		N = 0 - N;
	}
	if (N > 0)
	{
		while (N != 0)
		{
			a[i] = N % 10;
			N = N / 10;
			i++;
		}
	}

	while (i>0)
	{
		n = (struct node*)malloc(sizeof(struct node));
		if (head == NULL)
		{
			n->num = a[i-1];
			n->next = NULL;
			head = n;
			prev = n;
		}
		else if (head != NULL)
		{
			n->num = a[i-1];
			n->next = NULL;
			prev->next = n;
			prev = n;
		}
		i--;
	}
	return head;
}
