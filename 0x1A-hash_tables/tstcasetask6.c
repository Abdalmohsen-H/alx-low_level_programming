#include <stdlib.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1);
	hash_table_set(ht, "Holberton", "is cool");
	hash_table_set(ht, "Holberton", "is soooo cooool");
	hash_table_set(ht, "Holberton", "is awesome");
	hash_table_print(ht);
	hash_table_delete(ht);
	hash_table_print(ht);
	return (EXIT_SUCCESS);
}
