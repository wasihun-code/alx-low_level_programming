#include "lists.h"

/**
  * pop_listint - delete the head node
  * @head: head node
  * Return: data (element) of the deleted node
  */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *head2;
	int num;

	if (*head == NULL)
	{
		free(*head);
		return (0);
	}
	else
	{
		head2 = *head;
		ptr = head2;
		num = ptr->n;
		head2 = head2->next;
		free(ptr);
		*head = head2;
	}

	head2 = NULL;
	return (num);
}
