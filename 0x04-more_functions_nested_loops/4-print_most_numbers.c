#include "holberton.h"

/**
 * print_numbers - zero to ten.
 * @i: index for stdout.
 *
 * Return: 0 since void.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');

}
