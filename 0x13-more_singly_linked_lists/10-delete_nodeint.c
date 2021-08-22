#include "lists.h"
/**
  * delete_nodeint_at_index - delete a node at given index
  * @head: head of the node
  * @index: index of node to be deleted
  * Return: 1 if sunccessful else -1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *traverse;
	listint_t *prev;

	if (*head == NULL)
	{
		free(*head);
		return (-1);
	}
	traverse = *head;
	prev = *head;

	if (index == 0)
	{
		*head = traverse->next;
		free(traverse);
		/*traverse = NULL;*/
		return (1);
	}
	else
	{
		while (index != 0)
		{
			prev = traverse;
			traverse = traverse->next;
			index--;
		}
		prev->next = traverse->next;
		free(traverse);
		return (1);
	}
	return (-1);
}
