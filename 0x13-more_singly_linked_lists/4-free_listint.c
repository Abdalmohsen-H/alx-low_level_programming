#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: A pointer to linke list to be freed.
 **/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)/*true if is list still have nodes then loop*/
	{
		temp = head;/*assign current head node to temp to free it*/
		head = head->next;/* point head to next node because current will be freed*/
		free(temp);/*freecurrent (AKA temp) */
	}
}
