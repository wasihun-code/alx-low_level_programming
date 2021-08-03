#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - adds a node at the end.
 * @head: points to the head of the node.
 * @n: integer for new node to be inserted.
 * Return: address of the node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	struct listint_s *New = malloc(sizeof(struct listint_s));
	struct listint_s *last = *head;

	New->n = n;
	New->next = NULL;
	if (*head == NULL)
	{
		*head = New;
		return (New);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = New;
	return (last);
}
