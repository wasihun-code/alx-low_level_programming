#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - counts no of strings.
 * @s: pointer to a string.
 * Return: character.
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
