#include <stdio.h>
#include "lists.h"
/**
 *dlistint_len - return lengtho of doubly
 * linked list
 *@h: head of D lnkdlist
 *or just node of list you have to check
 *
 *Return: num of nodes found
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *headtmp = h;
	size_t cntr = 0;

	if (headtmp == NULL)
		return (cntr);/*return 0*/
	while (headtmp->prev != NULL)
	{headtmp = headtmp->prev;
	}
	while (headtmp->next)
	{
		cntr++;
		headtmp = headtmp->next;
	}
	cntr++;
	return (cntr);
}
