#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: head of the list
 * Return: the head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *nex = NULL;

	if (*head == NULL || head == NULL)
	{
		*head = NULL;
		return (*head);
	}

	while (*head != NULL)
	{
		nex = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nex;
	}

	*head = prev;
	return (*head);
}
