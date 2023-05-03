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
	if (head == NULL) /*list is NULL (no nodes)*/
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
	while (current != NULL)
	{/*loop till lis ends*/
		if (listindex == idx - 1)/*node before matching index*/
		{/*then link new to next node & add new node after current */
			newnode->next = current->next;/*order of this block matters*/
			current->next = newnode;/*this should happen in this order*/
			return (newnode);/*to avoid losing data*/
		}
		current = current->next;
		listindex++;/* we now on the next node */
	}
	/*loop ended without match, then index out of list range*/
	free(newnode);/*then free newnode we won't add or use it*/
	return (NULL);
}
