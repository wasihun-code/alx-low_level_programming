#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	struct head* head_node = (struct head*)malloc(sizeof(struct head));

	head_node->data = str;

	head_node->next = (*head);

	(*head) = head_node;

	return (str);
}
