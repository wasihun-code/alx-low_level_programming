#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps two integers.
 * @a: points to integer a.
 * @b: points to integer b.
 * Return: 0 since void.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
