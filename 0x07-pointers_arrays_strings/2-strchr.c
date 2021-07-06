#include "holberton.h"

/**
 * _strchr - first occurrence of a character.
 * @s: points to a string.
 * @c: character occurrence.
 * Return: character pointer.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] != 0)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
