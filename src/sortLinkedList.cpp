/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) 
{
	if (head == NULL)
	{
		return NULL;
	}
	else
	{
		struct  node *current, *prev, *sort;
		int temp;
		current = head;
		while ((current->next) != NULL)
		{
			{
				sort = current->next;
				while (sort != NULL)
				{
					if ((current->num) > (sort->num))
					{
						temp = current->num;
						current->num = sort->num;
						sort->num = temp;
					}
					sort = sort->next;
				}
			}
			current = current->next;
		}
	}
	return head;
}