#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: A pointer to linke list to be freed.
 **/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)/*true if is list still have nodes then loop*/
	{
		temp = head;/*assign current head node to temp to free it*/
		head = head->next;/* point head to next node because current will be freed*/
		free(temp->str);/*free str or current (AKA temp)*/
		free(temp);/*freecurrent (AKA temp)*/
	}
}
