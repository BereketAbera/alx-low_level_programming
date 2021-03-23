#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get a node a given index
 * @head: head of a linked list
 * @index: index of required node
 *
 * Return: the node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tempNode;

	tempNode = head;
	if (head == NULL)
		return (NULL);

	while (tempNode != NULL)
	{
		if (i == index)
			return (tempNode);
		tempNode = tempNode->next;
		i++;
	}

	return (NULL);
}
