/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K)
{

	if (head==NULL||K<2)
	return NULL;
	else
	{
		struct  node *node = NULL, *prev = NULL, *temp = NULL, *temp1 = NULL;
		int i = 1, j=0;
		j = j + K;
		prev = head;
		int count = 0;  
		struct node* current = head;  
		while (current != NULL)
		{
			count++;
			current = current->next;
		}
		while (j<=count)
		{
			if (i < j)
			{
				temp= prev;
				node = prev->next;
				prev = node;
			}
			else
			{
				temp->next = node->next;
				node->next = NULL;
				prev = temp->next;
				j = j + K;
			
			}
				i++;
		}
	}
	return head;
}