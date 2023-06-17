#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *insert_dnodeint_at_index - insrt node by index
 * in doubly linked list
 *@h: double pintr of head of D lnkdlist
 *@idx: index
 *@n: data n of node
 *Return: node addrs if found index else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{unsigned int cntr = 1;
	dlistint_t *head = *h;
	dlistint_t *newnod;

	if (head == NULL || h == NULL)
		return (NULL);
	newnod = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (newnod == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (head->next == NULL && idx == 1)/*to avoid adding out of range idx*/
		return (add_dnodeint_end(h, n));
	while (head->next != NULL)
	{
		if (idx == cntr)
		{(head->prev)->next = newnod;
			newnod->n = n;
			newnod->prev = head->prev;
			newnod->next = head;
			head->prev = newnod;
			return (newnod);
		}
		head = head->next;
		cntr++;
	}
	if (idx == cntr)
		return (add_dnodeint_end(h, n));
	free(newnod);
	return (NULL);
}
