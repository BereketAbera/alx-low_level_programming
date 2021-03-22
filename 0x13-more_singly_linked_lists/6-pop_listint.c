#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - pop the head of a linked list
 * @head: the head of a linked list
 *
 * Return: return the data of the head
 */
int pop_listint(listint_t **head)
{
	listint_t *tempNode;
	int i;

	if (*head == NULL)
		return (0);

	tempNode = *head;

	*head = (*head)->next;
	i = tempNode->n;
	free(tempNode);
	return (i);	
}
