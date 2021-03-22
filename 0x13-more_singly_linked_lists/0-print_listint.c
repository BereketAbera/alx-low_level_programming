#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print elemenet of a linked list
 * @h: a linked list
 *
 * Return: number of elements of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
