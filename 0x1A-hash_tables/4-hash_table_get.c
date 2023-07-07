#include "hash_tables.h"*
/**
 * hash_table_get - hash_table_get
 *  *@ht: ht
 *@key: key
 *Return: value as cstring char *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{unsigned long int hash;
	hash_node_t *tmpnode;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);
	hash = key_index((const unsigned char *) key, ht->size);
	if (ht->array[hash] == NULL)
		return (NULL);
	ht->array[hash]->key;
	tmpnode = ht->array[hash];
	while (tmpnode != NULL && tmpnode->key != NULL)
	{
		if (strcmp(tmpnode->key, key) == 0)
		{/*printf("found match");*/
			return (tmpnode->value);
		}
		if (tmpnode->next != NULL)
			tmpnode = tmpnode->next;
		else
			break;
	}
	return (NULL);
}
