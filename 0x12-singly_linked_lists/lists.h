#ifndef linklist_h
#define linklist_h

/**
 * struct list_s - singly linked list node defined as structure
 * @str: string - (malloc'ed string) malloc used to
 * to dynamically allocate str on the heap.
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * typedef struct list_s list_t, means we could use list_t
 * directly to refer to this linked list node structure type
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
