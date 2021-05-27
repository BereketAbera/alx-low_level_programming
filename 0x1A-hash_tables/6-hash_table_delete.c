#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *temp, *temp2;

	if (!ht)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		if (temp)
		{
			while (temp->next)
			{
				temp2 = temp;
				temp = temp->next;
				free(temp2->key);
				free(temp2->value);
				free(temp2);
			}
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
