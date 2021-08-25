#include "holberton.h"
#include <stdio.h>

/**
 * _abs - documentation
 * @n: integer
 * Return: 0
 */

int _abs(int n)
{
	int result;

	if (n > 0)
	{
		result = n;
	}
	else if (n == 0)
	{
		result = 0;
	}
	else
	{
		result = n * -1;
	}

	return (result);
}
