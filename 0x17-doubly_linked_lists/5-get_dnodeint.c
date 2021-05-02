#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of the linked list
 * @index: index of node to find
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp_node = head;
	unsigned int count = 0;

	while (temp_node != NULL)
	{
		if (index == count)
			return (temp_node);
		temp_node = temp_node->next;
		count++;
	}

	return (NULL);
}
