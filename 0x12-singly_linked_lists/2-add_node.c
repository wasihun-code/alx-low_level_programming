#include "lists.h"
#include "lists.h"
/**
 * add_node - add node at the begenning of a list
 * @head: head of the list
 * @str: string to be printed
 * Return: address to the added node
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new->str);
		free(new);
		return (NULL);
	}

	new->len = len;
	new->next = *head;
	*head = new;

	for (len = 0; new->str[len] != '\0'; len++)
		;
	new->len = len;
	return (*head);
}
