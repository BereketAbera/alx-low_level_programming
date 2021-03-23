#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete  node at index
 * @head: head of a linked list
 * @index: index of a a node
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tempNode1, *tempNode2 = NULL;

	if (*head == NULL)
		return (-1);
	tempNode1 = *head;
	while (tempNode1 != NULL)
	{
		if (i == index)
		{
			if (tempNode2 == NULL)
			{
				*head = tempNode1->next;
				free(tempNode1);
				return (1);
			}
			tempNode2->next = tempNode1->next;
			free(tempNode1);
			return (1);
		}
		tempNode2 = tempNode1;
		tempNode1 = tempNode1->next;
		i++;
	}
	return (-1);
}
