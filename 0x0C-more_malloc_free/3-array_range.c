#include "holberton.h"

/**
  * array_range - craet an array (arranged)
  * @min: minimum value of the array
  * @max: maximum size of an array
  * Return: pointer to the new array mem location
  */

int *array_range(int min, int max)
{
	int j, sz;
	int *ptr;

	if (min > max)
		return (NULL);
	sz = max - min + 1;

	ptr = malloc(sizeof(int) * sz);
	if (ptr == NULL)
		return (NULL);

	for (j = 0; min <= max; j++, min++)
	{
		ptr[j] = min;
	}
	return (ptr);
}
