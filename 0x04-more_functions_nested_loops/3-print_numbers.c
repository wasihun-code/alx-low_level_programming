#include "holberton.h"

/**
 * print_numbers - zero to ten
 *
 * Return: 0 since void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <=9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
