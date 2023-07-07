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
	int skipfrst = 1;

	if (ht != NULL)
	{printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{tmpnode = ht->array[idx];
			while (tmpnode != NULL && tmpnode->key != NULL)
			{
				if (skipfrst == 0)
					printf(", ");
				printf("'%s': '%s'", tmpnode->key, tmpnode->value);
				if (skipfrst == 1)
					skipfrst = 0;
				if (tmpnode->next != NULL)
					tmpnode = tmpnode->next;
				else
					break;
			}
		}
	printf("}\n");
	}
}
