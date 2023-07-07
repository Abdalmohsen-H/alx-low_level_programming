#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - hash_table_set
 *@ht: ht
 *@key: key
 *@value: val
 *Return: int 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{unsigned long int hash;
	hash_node_t *tmpnode, *nw_node =  malloc(sizeof(hash_node_t));

	if (key == NULL || *key == '\0' || ht == NULL || value == NULL)
		return (0);
	hash = key_index((const unsigned char *) key, ht->size);

	tmpnode = ht->array[hash];
	while (tmpnode != NULL && tmpnode->key != NULL)
	{
		if (strcmp(tmpnode->key, key) == 0)
		{printf("key already exist update value");
			tmpnode->value = strdup(value);
			return (1);
		}
		if (tmpnode->next != NULL)
			tmpnode = tmpnode->next;
		else
			break;
	}

	nw_node =  malloc(sizeof(hash_node_t));
	if (nw_node == NULL)
		return (0);

	nw_node->key = strdup(key);
	nw_node->value = strdup(value);
	/*could be null or collision node*/
	nw_node->next = ht->array[hash];

	ht->array[hash] = nw_node;

	return (1);
}
