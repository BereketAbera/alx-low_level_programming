#include <stdio.h>
#include "lists.h"

/**
 * listint_len - get length of a linked list
 * @h: a linked list
 *
 * Return: number of elements of the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
