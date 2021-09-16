#include "lists.h"

/**
 * dlistint_len - function that returns length of double linked list
 * @h: head pointer
 * Return: length of doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
