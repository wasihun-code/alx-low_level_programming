#include "holberton.h"

/**
 * main - Entry
 * Return: 0
 */

int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

int print_sign(int n)
{
	int result;
	if (n > 0)
	{
		_putchar('-');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar(48);
		result = 0;
	}
	else
	{
		_putchar(45);
		result = -1;
	}
	return (result);
}
