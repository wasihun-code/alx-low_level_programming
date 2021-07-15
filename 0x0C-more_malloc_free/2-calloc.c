#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for arrays.
 * @nmemb: element number.
 * @size: size of the memory.
 * Return: 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *calloc = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		exit(1);
	if (calloc == 0)
		exit(1);

	return (calloc);
}
