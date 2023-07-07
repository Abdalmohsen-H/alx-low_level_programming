#include "hash_tables.h"

/**
 * key_index - generates Hash which is key_index a.k.a.
 * -> the index of array where input key/value pair will
 * be stored inside the hashtable's array
 * @key: input key to generate (Hash) -> array index inside
 * the size specified
 * @size: fixed size for the array of the hash Table.
 *
 * Return: The index of the array (i.e. Hashed value from hash func).
 *
 * djb2 algorithm is been used here
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_index = hash_djb2(key) % size;

	return (hashed_index);
}
