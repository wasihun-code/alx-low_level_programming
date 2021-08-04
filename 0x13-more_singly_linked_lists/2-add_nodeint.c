#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds node at the beginning.
 * @head: points to head of node.
 * @n: integer for new node.
 * Return: pointer.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *new;

	if(*head == NULL)
	  return (NULL):
	new = malloc(sizeof(struct listint_s));
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (new);
}
