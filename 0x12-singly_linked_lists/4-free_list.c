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
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		temp->next = NULL;
		free(temp);
	}
}
