#include "holberton.h"

/**
 * print_sign - documente
 * Return: 0
 */

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
		result = +1;
	}
	return (result);
}
