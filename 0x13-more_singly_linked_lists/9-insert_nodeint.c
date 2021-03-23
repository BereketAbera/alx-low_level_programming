#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: the head of a linked list
 * @idx: index of the new node
 * @n: the value of a new node
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, const int n)
{
	listint_t *newNode, *tempNode1 = *head, *tempNode2 = NULL;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		free(newNode);
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
		{
			free(newNode);
			free(*head);
			return (NULL);
		}
		*head = newNode;
		return (newNode);
	}
	while (tempNode1->next != NULL)
	{
		i++;
		if (idx == i - 1)
		{
			tempNode2->next = newNode;
			newNode->next = tempNode1;
			return (newNode);
		}
		tempNode2 = tempNode1;
		tempNode1 = tempNode1->next;
	}
	if (idx >= i && i != 0)
		return (NULL);
	newNode->next = tempNode1;
	*head = newNode;
	return (newNode);
}
