#include "lists.h"
#include <stdio.h>
/**
 *add_nodeint-Adds a new node at the begining of a list.
 *@head:Pointer to a pointer that points to the head node of a list.
 *@n:element of the list.
 *Return:Pointer to the newly added node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
