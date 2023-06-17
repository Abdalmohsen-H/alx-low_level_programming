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

	if (idx == 0)
		return (add_dnodeint(h, n));
	if ((head == NULL || h == NULL) && idx != 0)/*idx != 0 is at top*/
		return (NULL);/*and conditn is not important just to remember logic*/
	newnod = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (newnod == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (idx == cntr)/*index match found then check if it lsat node or not*/
		{
			if (head->next == NULL)
			{
				return (add_dnodeint_end(h, n));
			}
			newnod->next = head->next;
			head->next = newnod;
			newnod->n = n;
			newnod->prev = head;
			(newnod->next)->prev = newnod;
			return (newnod);

		}
		head = head->next;
		cntr++;
	}
	free(newnod);
	return (NULL);
}
