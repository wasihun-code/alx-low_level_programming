#include "holberton.h"

/**
 * main - Entry
 * Return: 0
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 97; a < 123; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
