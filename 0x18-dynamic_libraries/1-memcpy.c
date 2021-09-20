#include "holberton.h"

/**
  * _memcpy - fill bites from src to destination string.
  * @src: ource string
  * @dest: destination string
  * @n: number of bites to be copied
  * Return: destination string.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
