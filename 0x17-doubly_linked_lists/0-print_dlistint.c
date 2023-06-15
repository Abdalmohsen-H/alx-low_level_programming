#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint - print data off nodes
 * in doubly linked list
 *@h: head of D lnkdlist
 *or just node of list you have to check
 *
 *Return: num of nodes found
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *headtmp = h;
	size_t cntr = 0;

	if (headtmp == NULL)
		return (cntr);/*return 0*/
	while (headtmp->prev != NULL)
	{headtmp = headtmp->prev
	}
	while (headtmp->next)
	{
		printf("%d\n", headtmp->n);
		cntr++;
		headtmp = headtmp->next;
	}
	printf("%d\n", headtmp->n);
	cntr++;
	return (cntr);
}
