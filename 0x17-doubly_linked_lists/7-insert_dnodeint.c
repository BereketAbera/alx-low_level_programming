#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: linked list
 * @idx: index to insert
 * @n: new node value
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp_node = *h;
	unsigned int count = 0;

	if (*h == NULL)
	{
		if (idx != 0)
			return (NULL);
		*h = malloc(sizeof(dlistint_t));
		if (*h == NULL)
			return (NULL);
		(*h)->n = n;
		return (*h);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (temp_node->next != NULL)
	{
		if (count == idx)
		{
			new_node->prev = temp_node->prev;
			if (temp_node->prev != NULL)
				temp_node->prev->next = new_node;
			new_node->next = temp_node;
			temp_node->prev = new_node;
			return (new_node);
		}
		temp_node = temp_node->next;
		count++;
	}
	if (count == idx)
	{
		temp_node->next = new_node;
		new_node->prev = temp_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
