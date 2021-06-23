#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry
 * Return: 0
 */

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(98);
	printf("%d\n", r);
	return (0);
}

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
