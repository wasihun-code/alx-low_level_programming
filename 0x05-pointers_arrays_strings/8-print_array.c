#include "holberton.h"

/**
  * print_array - print n elements of an array
  * @a: value of an array
  * @n: number of array elements to be printed
  * Return: void
  */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index < (n - 1))
			printf(", ");
	}
	printf("\n");
}
