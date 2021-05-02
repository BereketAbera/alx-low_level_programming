#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of linked list
 * @index: index of node to delete
 *
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_node = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	while (temp_node != NULL)
	{
		if (index == count)
		{
			if (temp_node->prev != NULL)
				temp_node->prev->next = temp_node->next;
			if (temp_node->next != NULL)
				temp_node->next->prev = temp_node->prev;
			if (temp_node->prev == NULL)
				*head = temp_node->next;
			return (1);
		}
		temp_node = temp_node->next;
		count++;
	}

	return (-1);
}
