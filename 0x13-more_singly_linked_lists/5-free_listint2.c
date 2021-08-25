#include "lists.h"
#include <stdlib.h>
/**
 *free_listint2-Frees memory occupied by a list.
 *@head:Pointer to a pointer that points to the head of a linked list.
 *Return:Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		free(head);
	}

	else
	{

		while (*head != NULL)
		{
			temp = (*head);
			(*head) = (*head)->next;
			free(temp);
		}
		head = NULL;
	}
}
