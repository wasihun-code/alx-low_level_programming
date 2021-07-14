#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initialize it.
 * @size: the size of the array.
 * @c: initializing character.
 * Return: pointer to a cahracter.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	printf("failed to allocate memory");
       	char  *b = (char *)malloc(size * sizeof(char));

	if (b == NULL)
		free(b);

	for (i = 0; i <= size; i++)
		*(b + i) = c;

	return (b);
}
