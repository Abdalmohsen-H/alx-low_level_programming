#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Frees a linked list also will
 * set *head (head pointer)to null globally.
 * Using a double pointer (i.e., a pointer to a pointer) allows us to
 * modify the value of the head pointer itself within the function,
 * and have these changes persist outside of the function.
 * for example main function here will read the new changes
 * @head: A pointer to linke list to be freed.
 **/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL || head == NULL)
		return;/*because this function return void */
	/* here *head represent head pointer itself*/
	while (*head != NULL)/*true if is list still have nodes then loop*/
	{
		temp = *head;/*assign current head node to temp to free it*/
		*head = (*head)->next;/*current will be freed, so point head to next node*/
		free(temp);/*freecurrent (AKA temp) */
	}
	*head = NULL;/*must do this to head pointer to avoid memory leak*/
}
