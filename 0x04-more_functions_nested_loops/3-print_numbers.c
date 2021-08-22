#include "holberton.h"

/**
 * print_numbers - Print numbers zero to ten.
 * Return: void.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
