#include "holberton.h"
#include <stddef.h>

/**
 * print_line - prints a line based on n
 * @n: to test integer.
 * Return: void.
 */

void print_line(int n)
{
	int len;

	for (len = 1; len <= n; len++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
