#include "lists.h"

/**
 * sum_dnodeint - find sum of all data in a linked list
 * @index: index of the node.
 * Return: address of index o node.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head -> next;
	}

	return (sum);
}
