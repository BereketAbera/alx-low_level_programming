#include "lists.h"

/**
 * free_dlistint - free linked list memory
 * @head: head of a linked list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node = head;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
	free(head);
}
