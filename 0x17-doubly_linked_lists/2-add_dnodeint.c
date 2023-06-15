#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_dnodeint - insert node at beginning
 * of doubly linked list
 * and return this node address(double pintr)
 *@head: double pointr for head  of D lnkdlist
 *or just node of list you have to check
 *
 *Return: return added node address(double pintr)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t **headtmp = head;
	dlistint_t *newnod;

	newnod = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (newnod == NULL)
	{
		return (NULL);
	}
	while (*headtmp != NULL &&(*headtmp)->prev != NULL)
	{headtmp = &(*headtmp)->prev;
	}
	newnod->next = *headtmp;
	newnod->n = n;
	newnod->prev = NULL;
	if (*headtmp != NULL)
	{
		(*headtmp)->prev = newnod;
	}
	*head = newnod;
	return (newnod);
}
