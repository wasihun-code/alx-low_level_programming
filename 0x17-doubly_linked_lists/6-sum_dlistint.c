#include "lists.h"

/**
 * sum_dlistint - find sum of all data in a linked list
 * @head: pointer to transverse
 * Return: address of index o node.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
