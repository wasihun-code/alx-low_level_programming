#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: element number.
 * @size: size of the memory.
 * Return: 0.
 */

 void *_calloc(unsigned int nmemb, unsigned int size)
 {
 	unsigned int i;
 	char *ptr;

 	if (nmemb == 0 || size == 0)
 		return (NULL);

 	ptr = malloc(size * nmemb);

 	if (ptr == NULL)
 		return (NULL);
 	for (i = 0; i < size * nmemb; i++)
 		ptr[i] = 0;

 	return (ptr);
 }
