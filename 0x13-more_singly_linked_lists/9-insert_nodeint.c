#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given position.
 * @head: pointer to pointer of head of node.
 * @idx: index for positon.
 * @n: data for new node.
 * Return: pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	struct listint_s *ptr = *head;
	struct listint_s *ptr2 = malloc(sizeof(struct listint_s));

	ptr2->n = n;
	ptr2->next = NULL;
	idx--;
	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
	return (ptr);
}
