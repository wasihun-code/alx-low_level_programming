#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - alloc width and height
 * @width: width
 * @height: height
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **ar, j, k;

	if (height <= 0 || width <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		ar[j] = malloc(sizeof(int) * width);
		if (ar[j] == NULL)
		{
			for (k = 0; k < width; k++)
				free(ar[k]);
			free(ar);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			ar[j][k] = 0;
		}
	}
	return (ar);
}
