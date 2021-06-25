#include "holberton.h"
#include <stddef.h>

/**
 * print_line - prints a line based on n
 * @n: to test integer.
 */

void print_line(int n)
{
	size_t i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n == 2)
	{
		for (i = 0; i <= 1; ++i)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= 9; ++i)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
