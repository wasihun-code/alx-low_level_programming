#include "lists.h"

/**
 * add_dnodeint - adds a node at beginning of DLL.
 * @head: pointer to transverse.
 * @n: data to be inserted to the new node.
 * Return: the address of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (!temp)
	{
		free(temp);
		return (NULL);
	}

	temp->n = n;
	temp->next = (*head);
	temp->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = temp;
	(*head) = temp;

	return (*head);
}
