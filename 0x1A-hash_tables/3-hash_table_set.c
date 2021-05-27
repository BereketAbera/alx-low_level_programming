#include "hash_tables.h"

/**
 * hash_table_set - store value to the hash table
 * @ht: hash table
 * @key: the key of a value
 * @value: the new value
 *
 * Return: always 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ni;
	int index;
	const unsigned char *l_key = (unsigned char *) key;

	if (strlen(key) == 0)
		return (0);
	ni = malloc(sizeof(hash_node_t));
	if (!ni)
		return (0);

	ni->key = strdup(key);
	ni->value = strdup(value);
	ni->next = NULL;

	index = key_index(l_key, ht->size);

	if (*(ht->array + index) == NULL)
		*(ht->array + index) = ni;
	else
	{
		ni->next = ht->array[index];
		*(ht->array + index) = ni;
	}

	return (index);
}
