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
	char  *b = (char *)malloc(size * sizeof(char));

	*b = c;

	return (b);
}
