 #include <stdio.h>
#include "holberton.h"

/**
 * *_strncat - check the code for Holberton School students.
 *@dest: value one
 *@src: value two
 *@n: int n
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int  len, j;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (j = 0; j < n; len++, j++)
	{
		dest[len] = src[j];
		if (src[j] == '\0')
			break;
	}

	if (n < j)
	{
		dest[len] = '\0';
	}
	return (dest);
}
