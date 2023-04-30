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
int idx = 0;
list_t *newnode;

if (str == NULL || !head)
return (NULL);
newnode = malloc(sizeof(list_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (newnode);
}
