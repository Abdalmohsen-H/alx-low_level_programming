#include <stdlib.h>
#inclidue "lists.h"
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL, *nextnode = NULL;

	if (!head || *head == NULL)
	{/*checks if head pointer is NULL or if list is empty*/
		return (NULL);
	}
	current = *head;/*set current pointer to point to head of list*/
	*head = NULL;/*this will be used below to convert head to tail*/
	while (current != NULL)
	{
		nextnode = current->next;/*define next node*/
		/*below:set old head's next to null (i.e. tail node) on 1st iteration*/
		current->next = *head;/*reverse current node's next pointer backward*/
		*head = current;/*set head pointer to current till newhead reached*/
		/*below if we on last node will be null to break the loop*/
		current = nextnode;/*move forward to repeat process*/
	}
	return (*head);/*return new hed after loop finished*/
}