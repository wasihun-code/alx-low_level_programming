#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers.
 * @min: the minimum no in the array.
 * @max: the maximum integer in the array.
 * Return: pointer to integer.
 */

int *array_range(int min, int max)
{
	int i;
	int *array = NULL;

	if (min > max)
	{
		exit(1);
	}
	if (array == NULL)
	{
		array = (int *)malloc((max + 1) * sizeof(int));
		for (i = min; i <= max; i++)
		{
			array[i] = i;
		}
	}
	else
		exit(1);

	return (array);
}
