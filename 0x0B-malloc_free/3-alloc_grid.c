#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 simensional arrays of integers.
 * @width: first dimension.
 * @height: second dimension.
 * Retrun: 0
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array = (int **)malloc(width * height * 4);

	if (width <= 0 || height <= 0)
		return NULL;

	if (array != NULL)
	{
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
			{
				**((array + i) + j)= 0;
			}
		}
	}
	return (array);
}
