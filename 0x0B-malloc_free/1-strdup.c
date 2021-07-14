#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initialize it.
 * @str: pointer to a string.
 * Return: pointer to a character string.
 */

char *_strdup(char *str)
{
	unsigned int i, k = 0;
	char  *b = (char *)malloc(11 * sizeof(char));


	if (b != NULL)
	{
		for (i = 0; str[k] != '\0'; i++)
		{
			*(b + i) = *(str + k);
			k++;
		}
		b[i] = '\0';

	}
	return (b);
}
