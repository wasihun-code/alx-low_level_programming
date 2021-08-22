#include "lists.h"

/**
 * add_node_end - add node at the end
 * @head: head of the node
 * @str: string to be printed
 * Return: address of the last pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *last;
	int len;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (*head == NULL)
		*head = ptr;
	else
	{
		last = malloc(sizeof(list_t));
		last->next = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = ptr;
	}

	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr->str);
		free(ptr);
		return (NULL);
	}

	for (len = 0; ptr->str[len] != '\0'; len++)
		;
	ptr->len = len;
	return (*head);
}
