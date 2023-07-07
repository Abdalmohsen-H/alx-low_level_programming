#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_print - print func hash_table_print
 *  *@ht: ht
 */
void hash_table_print(const hash_table_t *ht)
{hash_node_t *tmpnode;
	unsigned long int idx;

	if (ht != NULL)
	{
		for (idx = 0; idx < ht->size; idx++)
		{tmpnode = ht->array[idx];			
			while (tmpnode != NULL && tmpnode->key != NULL)
			{
				printf("'%s': '%s'", tmpnode->key, tmpnode->value);
				if (tmpnode->next != NULL)
					tmpnode = tmpnode->next;
				else
					break;
			}
		}
	}
}
