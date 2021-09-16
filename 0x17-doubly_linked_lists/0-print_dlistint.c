#include "lists.h"

/**
 * print_dlistint - prints data of a doubly linked list
 * @h: head pointer for transversing
 * Return: len of doubly linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
