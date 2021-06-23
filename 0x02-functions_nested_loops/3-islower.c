#include "holberton.h"
#include <ctype.h>

/**
 * _islower - documentation
 * Return: 0
 */

int _islower(int c)
{
	int res;

	res = islower();
	if (c >= 97 && c <= 122)
	{
		_putchar("%d", 1);
	}
	else
	{
		_putchar("%d", 0);
	}
	return (res);
}
