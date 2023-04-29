#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - add node to end of singly linked list
 * AKA addind newnode to linked list's tail
 * @str: string - (malloc'ed string)
 * @head: pointer of pointer to head node
 *
 * Return: the address of the new node
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{	int idx = 0;
	list_t *newnode;

	if (str == NULL || !head)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	if (!(newnode->str))
	{
		free(newnode);
		return (NULL);
	}
	for (; newnode->str[idx]; idx++)
	{;
	}
	newnode->len = idx;
	if (*head == NULL) /*list still NULL (no nodes)*/
	{
		*head = newnode;/*point head to first newnode*/
		newnode->next = NULL;/*first newnode is also lastnode*/
		/*till we add extra nodes*/
	}
	else /*the list already have nodes*/
	{list_t *current = *head;/*then *head is the first node*/
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
