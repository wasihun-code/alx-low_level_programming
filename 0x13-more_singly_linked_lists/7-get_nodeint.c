#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node.
 * @head: pointer to the head.
 * @index: value to be founded.
 * Return: pointer.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	struct listint_s *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	if (count != index)
		return (NULL);
	return (current);
}
