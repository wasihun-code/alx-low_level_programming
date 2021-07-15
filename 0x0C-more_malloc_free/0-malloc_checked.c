#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory.
 * @b: unsigned integer for the size.
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("%d", 98);
		exit(1);
	}

	return (ptr);
}
