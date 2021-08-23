
#include "holberton.h"
/**
 * print_number - print number
 * @n: number to be printed
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}

	else
		i = n;

	if (i / 10 != 0)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
