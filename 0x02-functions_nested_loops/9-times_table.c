#include "holberton.h"

/**
 * times_table - print the time table from 0 t0 9.
 * Return: void.
 */

void times_table(void)
{
	int i, j, rs;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			rs = i * j;
			if (rs <= 9)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(rs + '0');
			}
			if (rs > 9 && rs <= 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(rs / 10 + '0');
				_putchar(rs % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
