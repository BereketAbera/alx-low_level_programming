#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free lists memory
 * @head: the head of a list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	free_list(head->next);
	free(head);
}
