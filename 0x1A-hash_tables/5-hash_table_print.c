#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *temp;
	int printed = 0;

	if (!ht)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		if (temp)
		{
			if (printed == 0)
				printf("{");
			else
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			printed++;
			while (temp->next)
			{
				printf(", ");
				temp = temp->next;
				printf("'%s': '%s'", temp->key, temp->value);
				printed++;
			}
		}
	}
	if (printed == 0)
		printf("{");
	printf("}\n");
}
