#include "holberton.h"

/**
 * print_square - print a square using #
 * Return: 0
 */

void print_square(int n)
{
	int i, j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
