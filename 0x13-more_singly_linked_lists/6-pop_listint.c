#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - remove head of singly linked list
 * return data of deleted head node
 * @head: pointer of pointer to head node
 *
 * Return: int n of deleted node or 0 if List empty
 */
int pop_listint(listint_t **head)
{
	int nhead;
	listint_t *oldhead;

	if (!head || !(**head))
	{return (0);
	}
	/*save addres of old head node to free it later*/
	oldhead = *head;
	nhead = (*oldhead)->n;
	/* move head pointer to next node */
	*head = (*head)->next;
	free(*oldhead);
	return (nhead);
}
