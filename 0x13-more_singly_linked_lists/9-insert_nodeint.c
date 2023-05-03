#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - find if index exist on
 * singly linked list and insert new node
 * @idx: input index
 * @head: pointer to head node
 * @n: integer
 * Return: address of new node
 * or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{listint_t *current, *newnode, *previousnode;
	unsigned int listindex = 0;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL) /*list is NULL (no nodes)*/
		return (NULL);
	current = *head;/*list have nodes and *head is the first node*/
	/* check if 1st is also last node before go through list*/
	if (current->next == NULL && idx == 0)
	{newnode->next = current;
		*head = newnode;
		return (newnode);
	}
	else if (current->next == NULL && idx > 0)/* index not found on list*/
		return (NULL);
	while (current->next != NULL)/*loop till you get match or list ends*/
	{
		if (listindex == idx)
		{previousnode->next = newnode;
			newnode->next = current;
			return (newnode);
		}
		previousnode = current;/*save current node before moving forward*/
		current = current->next;/*moving to next node*/
		listindex++;/* we now on the next node */
	}
	if (listindex == idx)/*we reached last node of it*/
	{previousnode->next = newnode;
		newnode->next = current;
		return (current);
	}
	return (NULL);
}
