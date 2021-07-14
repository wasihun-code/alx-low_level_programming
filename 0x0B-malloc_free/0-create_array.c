#include "holberton.h"
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
	if (size == 0)
		printf("failed to allocate memory");
	else
		char  *b = (char *)malloc(size * sizeof(char));

	for (i = 0; i <= size; i++)
		*(b + i) = c;

	return (b);
}
