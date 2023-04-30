#ifndef linklist2_h
#define linklist2_h

#include <stddef.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list node defined as structure
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * typedef struct listint_s listint_t, means we could use listint_t
 * directly to refer to this linked list node structure type
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int _putchar(char c);

#endif
