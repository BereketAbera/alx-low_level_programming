#include <stdio.h>
#include "lists.h"

/**
 * list_len - get the length of a linked list
 * @h: the linked list
 *
 * Return: the length of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
