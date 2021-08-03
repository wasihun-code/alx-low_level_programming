#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * listint_len - returns no of nodes.
 * @h: pointer for transversing.
 * Return: no of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
