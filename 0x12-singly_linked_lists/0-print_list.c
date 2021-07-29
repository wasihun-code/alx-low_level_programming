#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints values in nodes.
 * @h: no of nodes.
 * Return: No of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
