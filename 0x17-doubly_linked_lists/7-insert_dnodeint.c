#include "lists.h"

/**
 * insert_dnodeint_at_index - insert the node at index
 * @head: pointer to transverse
 * @index: index of the node.
 * Return: address of index of node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last = *h;

	while (last != NULL)
	{
		if (len == idx)
			break;
		last = last->next;
		len++;
	}

	new_node->n = n;
	new_node->next = last->next;
	last->next = new_node;
	new_node->prev = last;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
