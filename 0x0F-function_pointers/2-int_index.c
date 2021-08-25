
#include <stdio.h>

/**
  * int_index - find the index of a given element in an array
  * @array: array to be scaned
  * @size: size of the array
  * @cmp: function pointer to compare fucntion
  * Return: index of the element if found or NULL
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (k = 0; k < size; k++)
		{
			if (cmp(array[k]) != 0)
				return (k);
		}
	}
	return (-1);
}
