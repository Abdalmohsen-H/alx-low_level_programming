#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sum of n values inside all
 * singly linked list
 * @head: pointer to head node
 *
 * Return: sum of all n data
 * or 0 if it failed
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	unsigned int sum = 0;

	if (head == NULL) /*list still NULL (no nodes)*/
	{
		return (0);
	}
	else /*the list already have nodes*/
	{current = head;/*then *head is the first node*/
		while (current->next != NULL)
		{/* then loop till and get sum or list ends*/
			sum += (current->n);
			/* AKA loop to traverse a linked list data structure.*/
			current = current->next;
			/* we now on the next node */
		}
		/*loop ended when we reached last node of it*/
		sum += (current->n);
	}
	return (sum);
}
