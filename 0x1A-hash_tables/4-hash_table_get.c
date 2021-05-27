#include "hash_tables.h"

/**
 * hash_table_get - get key value from hashtable
 * @ht: hash table
 * @key: a key to find value for
 *
 * Return: value of the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hn = NULL;
	const unsigned char *l_key = (unsigned char *) key;
	int index;

	index = key_index(l_key, ht->size);
	hn = ht->array[index];
	if (hn)
	{
		while (strcmp(key, hn->key) != 0)
			hn = hn->next;
		if (hn)
			return (hn->value);
	}

	return (NULL);
}
