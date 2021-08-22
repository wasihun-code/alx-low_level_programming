#include "lists.h"

/**
  * free_list - frees the list
  * @head: head of the node
  * Return: nothing
  */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
