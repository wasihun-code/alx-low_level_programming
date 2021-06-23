#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet 10 times lower case
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 97; a < 123; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
