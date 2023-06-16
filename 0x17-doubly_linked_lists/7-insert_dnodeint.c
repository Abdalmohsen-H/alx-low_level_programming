#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *insert_dnodeint_at_index - get node by index
 * in doubly linked list
 *@h: double pintr of head of D lnkdlist
 *@idx: index
 *@n: data n of node
 *Return: node addrs if found index else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{unsigned int cntr = 0;
	dlistint_t **head = h;
	dlistint_t *newnod;

	newnod = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (newnod == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	do {
		if (idx == cntr)
		{((*head)->prev)->next = newnod;
			newnod->n = n;
			newnod->prev = (*head)->prev;
			newnod->next = *head;
			(*head)->prev = newnod;
			return (newnod);
		}
		*head = (*head)->next;
		cntr++;
	} while ((*head)->next != NULL);
	if (idx == cntr)
	{((*head)->prev)->next = newnod;
		newnod->n = n;
		newnod->next = *head;
		newnod->prev = (*head)->prev;
		(*head)->prev = newnod;
		return (newnod);
	}
	return (NULL);
}
