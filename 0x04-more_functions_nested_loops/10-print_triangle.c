#include "holberton.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle using #
 * @n: no of lines of triangle.
 * Return: 0 on success.
 */

void print_triangle(int n)
{
	int i, j, k;

	for (i = 1; i <= n; i++)
	{
		for (k = n - 1; k > 0; k--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}
