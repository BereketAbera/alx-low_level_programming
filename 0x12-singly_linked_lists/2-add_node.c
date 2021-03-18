#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a node to a linked list
 * @head: the head of a linked list
 * @str: the value of a the new node
 *
 * Return: the linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = 0;

	while (str != NULL && str[len] != '\0')
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = len;
	*head = new_node;
	return (*head);
}
