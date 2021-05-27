#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 *
 * Return: pointer to the new array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht = NULL;

	hasht = malloc(sizeof(hash_node_t));
	if (!hasht)
		return (NULL);

	hasht->size = size;
	hasht->array = (hash_node_t **) malloc(size * sizeof(hash_node_t *));
	if (!hasht->array)
		return (NULL);

	return (hasht);
}
