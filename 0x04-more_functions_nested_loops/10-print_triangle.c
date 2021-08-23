#include "holberton.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle using #
 * @size: no of lines of triangle.
 * Return: 0 on success.
 */

void print_triangle(int size)
{
	int row, col, col2;

	if (size <= 0)
		_putchar('\n');

	for (row = 1; row <= size; row++)
	{
		for (col = row; col < size; col++)
		{
			_putchar(' ');
		}
		for (col2 = 1; col2 <= row; col2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
