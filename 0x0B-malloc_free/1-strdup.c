#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creates a memory on heap to store a string.
 * @str: pointer to a string.
 * Return: pointer to a character string.
 */

char *_strdup(char *str)
{
	unsigned int i, k = 0;
	char  *ptr = (char *)malloc(sizeof(str));

	if (str == NULL)
		printf("failed to allocate memory\n");
	if (ptr != NULL)
	{
		for (i = 0; str[k] != '\0'; i++)
		{
			*(ptr + i) = *(str + k);
			k++;
		}
		ptr[i] = '\0';

	}
	return (ptr);
}
