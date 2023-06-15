#include <stdio.h>
#include "lists.h"
/**
  *print_dlistin - print data off nodes
  * in doubly linked list
  *@h: head of D lnkdlist
  *
  *Return: num of nodes found
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *headtmp = h;
	size_t cntr = 0;

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
