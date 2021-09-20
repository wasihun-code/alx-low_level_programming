
#include "holberton.h"

/**
 * _strncpy - copy n bytes of chars to dest
 * @src: string to be copied
 * @dest: string to hold the copied string
 * @n: number of bytes to be copid
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len, len2;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (len2 = 0; src[len2] != '\0'; len2++)
		;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
	}
	for (; n > len2; len2++)
		dest[len2] = '\0';
	return (dest);
}
