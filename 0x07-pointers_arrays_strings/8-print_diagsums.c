#include "holberton.h"

/**
 * print_diagsums - check the code for Holberton School students.
 *@a: fjiest value
 *@size: size of num
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int m, sum, sum2;

	sum = 0;
	for (m = 0; m < size; m++)
		sum += *(a + ((size * m) + m));
	sum2 = 0;
	for (m = 1; m <= size; m++)
		sum2 += *(a + ((size * m) - m));
	printf("%d, %d\n", sum, sum2);
}
