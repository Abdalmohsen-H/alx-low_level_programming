#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_dlistint - free data& memory of nodes
 * in doubly linked list
 *@head: head of D lnkdlist
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		head->prev = NULL;
		head = head->next;
		free(head->prev);
	}
	head->prev = NULL;
	free(head);
}
