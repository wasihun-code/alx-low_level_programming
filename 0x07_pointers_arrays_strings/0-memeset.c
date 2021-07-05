#include "holberton.h"

/**
 * _memset - allocates c to memory.
 * Return: a character.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (0);
}
