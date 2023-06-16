#include <stdio.h>
#include "lists.h"
/**
 *sum_dlistint - sum all data of nodes
 * in doubly linked list
 *@head: head of D lnkdlist
 *
 *Return: sum all data of nodes or 0
 */
int sum_dlistint(dlistint_t *head)
{
	size_t cntr = 0;

	if (head == NULL)
		return (0);
	while (head->next)
	{
		cntr += head->n;
		head = head->next;
	}
	cntr += head->n;
	return (cntr);
}
