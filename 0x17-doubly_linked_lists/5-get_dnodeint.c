#include "lists.h"

/**
 * get_dnodeint - gets the node @index
 * @index: index of the node.
 * Return: address of index o node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0;

	while (head != NULL)
	{
		if (len == index)
			break;
		head = head -> next;
		len++;
	}

	return (head);
}
