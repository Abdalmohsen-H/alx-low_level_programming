#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create hashtable
 * @size: input size for hash table
 * Return: pointe to Hashtable
 * if failed return Null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htbl;
	unsigned long int idx;

	htbl = malloc(sizeof(hash_table_t));
	if (htbl == NULL)/* if failed */
		return (NULL);
	htbl->size = size;
	htbl->array = malloc(sizeof(hash_node_t *) * size);
	if (htbl->array == NULL)/*malloc filed*/
	{
		free(htbl);
		return (NULL);
	}
	for (idx = 0; idx < size; idx++)
		htbl->array[idx] = NULL;

	return (htbl);
}
