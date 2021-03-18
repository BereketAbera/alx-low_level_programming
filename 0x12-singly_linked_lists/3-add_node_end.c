#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add a node to the end of a linked list
 * @head: the head of a linked list
 * @str: a value of the new node
 *
 * Return: a pointer to the linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_head;
	size_t len = 0;

	while (str != NULL && str[len] != '\0')
		len++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->len = len;
	if ((*head) == NULL)
	{
		(*head) = malloc(sizeof(list_t));
		if ((*head) == NULL)
		{
			free(new_node);
			free((*head));
			return (NULL);
		}
		*head = new_node;
		return (*head);
	}
	temp_head = malloc(sizeof(list_t));
	if (temp_head == NULL)
	{
		free(new_node);
		free(temp_head);
		return (NULL);
	}
	temp_head = *head;
	while (temp_head->next != NULL)
		temp_head = temp_head->next;
	temp_head->next = new_node;
	return (*head);
}
