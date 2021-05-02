#include "lists.h"

/**
 * dlistint_len - get length of a doubly linked list
 * @h: doubly linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
