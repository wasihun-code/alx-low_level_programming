#include "holberton.h"

/**
 * reverse_array - reverse an array of int
 * @a: array of int
 * @n: number of elements in the array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp;


	for (i = 0; i < n; i++)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		n--;
	}
}
