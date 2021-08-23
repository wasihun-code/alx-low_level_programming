#include "holberton.h"
#include "main.h"

/**
  * print_diagonal - print diagonal
  * @n: number of diagonals (\) to print
  * Return: void
  */

void print_diagonal(int n)
{
	int rows, cols;

	if (n <= 0)
		_putchar('\n');
	for (rows = 1; rows <= n; rows++)
	{
		for (cols = 1; cols < rows; cols++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
