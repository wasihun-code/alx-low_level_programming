#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete the head node.
 * @head: points to head.
 * Return: integer.
 */

int pop_listint(listint_t **head)
{
	int s = 0;
	struct listint_s *Newnode = malloc(sizeof(struct listint_s));

	if (*head == NULL)
		return (0);
	Newnode = *head;
	s = Newnode->n;

	*head = (*head)->next;
	free(Newnode);
	return (s);
}
