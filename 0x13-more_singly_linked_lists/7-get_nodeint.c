#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - find if index exist on
 * singly linked list and return matching node
 * index's data
 * @index: input index
 * @head: pointer to head node
 *
 * Return: matching node index's data
 * or NULL if it failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int listindex = 0;

	if (head == NULL) /*list is NULL (no nodes)*/
	{
		return (NULL);
	}
	else /*the list already have nodes*/
	{current = head;/*then *head is the first node*/
		/* check if 1st is also last node before go through list*/
		if (current->next == NULL && index == 0)
		{
			return (current);
		}
		else if (current->next == NULL && index > 0)
		{/* index not found on list return null*/
			return (NULL);
		}
		while (current->next != NULL)
		{/* then loop till you get match or list ends*/
			if (listindex == index)
			{
				return (current);
			}
			/* AKA loop to traverse a linked list data structure.*/
			current = current->next;
			listindex++;
			/* we now on the next node */
		}
		/*loop ended when we reached last node of it*/
		if (listindex == index)
		{	/* now check if index matches or not*/
			return (current);
		}
	}
	return (NULL);
}
