#include "lists.h"

/**
 * free_dlistint - prints data of a doubly linked list
 * @head: head pointer for transversing
 * Return: len of doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
