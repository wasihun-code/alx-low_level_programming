#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a node.
 * @head: for traversing through the list.
 * Return: 0 since void.
 */

void free_listint(listint_t *head)
{
	struct listint_s *current = head;
	struct listint_s *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	head = NULL;
}
