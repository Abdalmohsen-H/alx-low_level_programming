#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - find if index exist on
 * doubly linked list and delete node
 * @index: input index
 * @head: address of pointer to head node
 * Return:1 if deleted new node
 * or -1 if deletion failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{dlistint_t *current = NULL, *node = NULL, *previous_node = NULL;
    unsigned int listindex = 0;

    if  (head == NULL || *head == NULL)
    {
        return (-1);
    }
    current = *head;/*list have nodes and *head is the first node*/
    if (index == 0)/*if true u must refer to *head inside*/
    {
        *head = (*head)->next;/*move *header to next node*/
        (*head)->prev = NULL;
        if (current)
		free(current);
        return (1);
    }
    else if ((*head)->next == NULL && index > 0)/* index not found on list*/
        return (-1);
    while (current != NULL)
    {/*loop till doublelist ends*/
        if (listindex == index)/*node matching index*/
        {
            node = *head;/*we save *head node to free it*/
            if (node->prev != NULL)
            {previous_node = node->prev;
              previous_node->next = current->next;/*order of this block matters*/
            }
            if (current->next != NULL)
                (current->next)->prev = previous_node;
            if (node)
		    free(node);/*this should happen in this order*/
            return (1);/*to avoid losing data*/
        }
        current = current->next;
        listindex++;/* we now on the next node */
    }
    /*loop ended without match, then index out of list range*/
    return (-1);
}
