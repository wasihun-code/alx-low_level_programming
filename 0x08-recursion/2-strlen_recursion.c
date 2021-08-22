#include "holberton.h"

/**
  * _strlen_recursion - find length of a given string
  * @s: given string
  * Return: length of the strning
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
