#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 *hash_table_delete - delete hashtable
 *@ht - hashtable
 */
void hash_table_delete(hash_table_t *ht)
{hash_node_t *tmpnode;
	unsigned long int idx;

	if (ht != NULL)
	{
		for (idx = 0; idx < ht->size; idx++)
		{tmpnode = ht->array[idx];
			while (tmpnode != NULL && tmpnode->key != NULL)
			{
				free(tmpnode->key);
				free(tmpnode->value);
				free(tmpnode);
					if (tmpnode->next != NULL)
						tmpnode = tmpnode->next;
					else
						break;
			}
		}
		free(ht->array);
		free(ht);
	}
}
