#include "holberton.h"

/**
  * print_square - print # character n times
  * @size: size of the sqaure
  * Return: none void
  */

void print_square(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');
	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
