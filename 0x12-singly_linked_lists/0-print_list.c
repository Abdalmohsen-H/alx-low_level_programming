#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all nodes data &
 * return list length (AKA number of nodes)
 *
 * @h: pointer to head of linked list (first node)
 * this is very important to define this list
 * as you always need to know first node to access
 * the linked list and get nest nodes
 *
 * Return: reurn number of nodes in linked list
 * of type (size_t) to ensure we have sufficient size
 * size_t ensure we have largest size for object
 * in the system
 */
size_t print_list(const list_t *h)
{
	size_t nodecount = 0;

	/* condithion h, means if node exist (True)*/
	/* then loop linked list again, still unfinished*/
	for (; h; nodecount++)
	{
		if (!(h->str))
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (nodecount);
}
