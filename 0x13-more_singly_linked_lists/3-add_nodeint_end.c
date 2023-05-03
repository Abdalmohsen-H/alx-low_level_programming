#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - add node to end of singly linked list
 * AKA addind newnode to linked list's tail
 * @n: integer
 * @head: pointer of pointer to head node
 *
 * Return: the address of the new node
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *current;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL) /*list still NULL (no nodes)*/
	{
		*head = newnode;/*point head to first newnode*/
		newnode->next = NULL;/*first newnode is also lastnode*/
		/*till we add extra nodes*/
	}
	else /*the list already have nodes*/
	{current = *head;/*then *head is the first node*/
		/* check if this lsat node in list before add newnode*/
		while (current->next != NULL)
		{/* then loop till you go to last node of List*/
			/* AKA loop to traverse a linked list data structure.*/
			current = current->next;
			/* we now on the next node */
		}
		/*loop ended when we reached last node of it*/
		/* now we can add new node at the end of list*/
		current->next = newnode;
		/* new added at the end of linked list*/
	}
	return (newnode);
}
