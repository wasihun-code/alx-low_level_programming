#include "holberton.h"
#include "main.h"

/**
 * _isupper - check if upper or lower
 * @c: value to be checked
 * Return: 1 if upper else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
