#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - a node to the beggining of a linked list
 * @head: the head of the linked list
 * @n: the value of the new node
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;
	return (*head);
}
