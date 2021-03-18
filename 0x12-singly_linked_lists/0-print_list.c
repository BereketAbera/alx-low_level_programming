#include <stdio.h>
#include "lists.h"

/**
 * print_list - print items of a linked list
 * @h: the list
 *
 * Return: the size of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		len++;
	}

	return (len);
}
