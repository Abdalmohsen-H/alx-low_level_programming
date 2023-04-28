#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - add node at beginning of singly linked list
 * @str: string - (malloc'ed string)
 * @head: pointer of pointer to head node
 *
 * Return: the address of the new node
 * or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int idx = 0;
	list_t *newnode;

	if (str == NULL || !head)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	if (!(newnode->str))
	{
		free(newnode->str);
		return (NULL);
	}
	for (; newnode->str[idx]; idx++)
	{
		;
	}
	/* idx = strlen(newnode->str)*/
	newnode->len = idx;
	newnode->next = *head;
	return (newnode);
}
