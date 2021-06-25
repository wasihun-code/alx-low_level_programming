#include "holberton.h"

/**
 * more_numbers - prints 0 to 14
 * Return: 0;
 */

void more_numbers(void);
{
	int i, j, k;
	char ar[] = "11121314";

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(i + '0');
		}
		for (j = 0; j <= 7; j++)
		{
			_putchar(ar[j]);
		}
		_putchar('\n');
	}
}
