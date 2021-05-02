#include "lists.h"

/**
 * sum_dlistint - return sum of linked list
 * @head: head of linked list
 *
 * Return: sum of linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}