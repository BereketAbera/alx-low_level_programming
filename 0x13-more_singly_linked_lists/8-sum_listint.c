#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sume linked list items
 * @head: head of a linked list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *tempNode;
	int sum = 0;

	tempNode = head;
	while (tempNode != NULL)
	{
		sum += tempNode->n;
		tempNode = tempNode->next;
	}

	return (sum);
}
