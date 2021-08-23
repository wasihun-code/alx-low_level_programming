#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - function to printnumbers 0 to 98.
 * @n: integer
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
				printf(", ");
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
				printf(", ");
			n--;
		}
	}
	printf("\n");
}
