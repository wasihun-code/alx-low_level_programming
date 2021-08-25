#include <stdio.h>

/**
 * array_iterator - function pointer to all elements of an array
 * @array: array
 * @size: arrray size
 * @action: pointer to function
 * Return: zero
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (size > 0 && array != NULL && action != NULL)
	{
		for (j = 0; j < size; j++)
			action(array[j]);
	}
}
