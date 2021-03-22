#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node to end of a linked list
 * @head: the head of a linked list
 * @n: the value of a new node
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tempNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
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
		return (*head);
	}

	tempNode = malloc(sizeof(listint_t));
	if (tempNode == NULL)
	{
		free(newNode);
		free(tempNode);
		return (NULL);
	}
	tempNode = *head;
	while (tempNode->next != NULL)
	{
		tempNode = tempNode->next;
	}
	tempNode->next = newNode;
	return (*head);
}
