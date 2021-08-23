#include "holberton.h"
#include <string.h>

/**
 * _strcat - appends src to dest string.
 * @dest: new string.
 * @src: string to be copied to dest.
 * Return: character string to a pointer.
 */

char *_strcat(char *dest, char *src)
{
	int len, ind2;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (ind2 = 0; src[ind2] != '\0'; ind2++)
	{
		dest[len] = src[ind2];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
