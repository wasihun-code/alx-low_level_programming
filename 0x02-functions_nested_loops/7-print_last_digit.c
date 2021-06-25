#include "holberton.h"

/**
 * print_last_digit - Entry
 * Return: 0
 */

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
