#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *get_dnodeint_at_index - get node by index
 * in doubly linked list
 *@head: head of D lnkdlist
 *@index: index
 *Return: node if found index else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{unsigned int cntr = 0;
	if (head == NULL)
		return (NULL);
	while(head != NULL)/*loop till list node*/
	{
		if (index == cntr)
			return(head);
		head = head->next;
		cntr++;
	}
	return (NULL);/* head == NULL */
}
