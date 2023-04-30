#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - add node at beginning of singly linked list
 * @n: integer
 * @head: pointer of pointer to head node
 *
 * Return: the address of the new node
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
