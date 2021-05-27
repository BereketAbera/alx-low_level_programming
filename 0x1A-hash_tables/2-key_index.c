#include "hash_tables.h"

/**
 * key_index - get index to for key
 * @key: the index of item
 * @size: size of the array
 *
 * Return: the index of the given key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long index;

	index = hash_djb2(key);

	return (index % size);
}
