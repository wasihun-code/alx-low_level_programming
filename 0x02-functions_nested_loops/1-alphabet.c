#include "holberton.h"

/**
 * main - Entry
 * Return: 0
 */
int onemain(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
