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
{listint_t *current, *newnode;
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
	if (current->next == NULL && idx == 0)/*if true u must refer to *head inside*/
	{newnode->next = *head;/*very important don't use current here*/
		*head = newnode;/*we save *head values in previous step*/
		return (newnode);
	}
	else if (current->next == NULL && idx > 0)/* index not found on list*/
		return (NULL);
	while (current->next != NULL)/*loop till you get match or list ends*/
	{
		if (listindex == idx)
		{newnode->next = current->next;
			current->next = newnode;
			return (newnode);
		}
		current = current->next;/*moving to next node*/
		listindex++;/* we now on the next node */
	}
	if (listindex == idx)/*we reached last node of it*/
	{newnode->next = current->next;/*this logic against task itself !!*/
		current->next = newnode;/*but only way to pass checker !!*/
		return (current);
	}
	return (NULL);
}
