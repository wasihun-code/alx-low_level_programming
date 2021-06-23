#include "holberton.h"
#include <ctype.h>

/**
 * threemain - Entry
 * _islower() - documentation
 * Return: 0
 */

int threemain()
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

int _islower(int c)
{
	int results;
	results = _islower(c);

	if (results != 0)
	{
		results = 1;
	}
	else
	{
		results = 0;
	}

	return (results);
}
