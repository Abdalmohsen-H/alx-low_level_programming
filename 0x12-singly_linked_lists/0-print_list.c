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
char *string;
unsigned int length;

/* condithion h, means if node exist (True)*/
for(; h; nodecount++)
{
string = h->str;
length = h->len;
if (!(h->str))
{string = "(nil)";
length = 0;
}
printf("[%d] %s\n", length, string);
h = h->next;
}
/* last node Let's print it*/

return (nodecount);
}
