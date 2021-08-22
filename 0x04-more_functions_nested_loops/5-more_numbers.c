#include "holberton.h"

/**
  * more_numbers - print nums form 0 - 14, 10 times
  * Return: void nothing
  */

void more_numbers(void)
{
	int rows, cols;

	for (rows = 0; rows < 10; rows++)
	{
		for (cols = 0; cols <= 14; cols++)
		{
			if (cols > 9)
				_putchar(cols / 10 + '0');
			_putchar(cols % 10 + '0');
		}
		_putchar('\n');
	}
}
