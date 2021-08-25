#include "holberton.h"

/**
 * _memset - allocates c to memory.
 * @s: points to an array of characters.
 * @b: character to fill.
 * @n: how many adress to fill.
 * Return: a character.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; /* looping var */

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
