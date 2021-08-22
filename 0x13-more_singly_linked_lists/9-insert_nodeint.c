#include "lists.h"

/**
  * insert_nodeint_at_index - insert a node at given position
  * @head: head of the node
  * @idx: index of node ot insert (index starts from 0)
  * @n: node data to assign to the inserted node
  * Return: the new inserted node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insert;
	listint_t *traverse;
	listint_t *cpy_head;
	unsigned int index = 0;

	if (*head == NULL)
	{
		free(*head);
		return (NULL);
	}
	cpy_head = *head;

	insert = malloc(sizeof(listint_t));
	if (insert == NULL)
	{
		free(insert);
		return (NULL);
	}
	insert->n = n;
	traverse = cpy_head;

	if (idx == 0)
	{
		insert->next = *head;
		*head = insert;
		return (*head);
	}

	while (traverse != NULL)
	{
		if (idx == index + 1)
		{
			insert->next = traverse->next;
			traverse->next = insert;
			return (*head);
		}
		traverse = traverse->next;
		index++;
	}
	return (NULL);
}
