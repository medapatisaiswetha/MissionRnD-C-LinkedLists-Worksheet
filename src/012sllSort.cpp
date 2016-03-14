/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head)
{
	struct  node *current, *prev, *sort;
	int temp;
	current= head;
	while ((current->next)!= NULL)
	{
		{
			sort = current->next;
			while (sort != NULL)
			{
					if ((current->data)>(sort->data))
					{
						temp = current->data;
						current->data = sort->data;
						sort->data = temp;
					}
			sort = sort->next;
			}
		}
	current=current->next;
	}	
}