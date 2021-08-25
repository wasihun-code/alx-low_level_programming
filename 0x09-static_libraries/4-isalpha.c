#include "holberton.h"

/**
 * _isalpha - checks if a character is alphanumeric or not.
 * @c: character to be checked.
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 91) || (c >= 97 && c <= 123))
		return (1);
	else
		return (0);
}
