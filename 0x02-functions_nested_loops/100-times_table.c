#include "holberton.h"
#include "main.h"

/**
 * tenth - print time table
 * @res: number of the time table
 * Return: void none
 */

void tenth(int res)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(res / 10 + '0');
	_putchar(res % 10 + '0');
}

/**
  * print_times_table - print time table
  * @n: number of the time table
  * Return: void none
  */

void print_times_table(int n)
{
	int i;
	int j;
	int res;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			if (res <= 9)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(res + '0');
			}
			if (res > 9 && res <= 99)
				tenth(res);
			if (res > 99 && res <= 999)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(res / 100 + '0');
				_putchar((res % 100) / 10 + '0');
				_putchar(res % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
