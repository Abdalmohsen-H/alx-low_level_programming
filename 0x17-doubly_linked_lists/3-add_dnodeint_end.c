#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint_end - insert node at end
 * of doubly linked list
 * and return this node address(double pintr)
 *@head: double pointr for head  of D lnkdlist
 *or just node of list you have to check
 *@n: data for new node
 *Return: return added node address(double pintr)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t **headtmp = head;
	dlistint_t *newnod;

	newnod = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (newnod == NULL)
	{
		return (NULL);
	}
	while (*headtmp != NULL && (*headtmp)->next != NULL)
	{headtmp = &(*headtmp)->next;
	}
	newnod->next = NULL;
	newnod->n = n;
	newnod->prev = *headtmp;
	if (*headtmp != NULL) /* (*headtmp)->next already = NULL*/
	{
		(*headtmp)->next = newnod;
	}
	/* *head = newnod;*/
	return (newnod);
}
