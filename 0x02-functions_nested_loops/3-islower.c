#include "main.h"
#include "holberton.h"
#include <ctype.h>

/**
 * _islower - documentation
 * @c: character that is to be checked.
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
