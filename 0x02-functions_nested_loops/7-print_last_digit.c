#include "holberton.h"

/**
 * main - Entry
 * Return: 0
 */

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

int print_last_digit(int n)
{
	int result;
	if (n > 0)
	{
		result = n % 10;
	}
	else if (n < 0)
	{
		n = n * -1;
		result = n % 10;
	}
	else
	{
		result = 0;
	}
	return (result);
}
