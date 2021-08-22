#include "holberton.h"
/**
  * _realloc - relocate memory on heap
  * @old_size: old size
  * @new_size: new
  * @ptr: previous pointer to mem
  * Return: pointer to reallocated mem
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int j;
	char *new;
	char *old;

	old = (char *)ptr;
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	if (ptr == NULL)
		return (new);
	if (new_size >= old_size)
	{
		for (j = 0; j < old_size; j++)
			new[j] = old[j];
	}

	free(ptr);
	return (new);
}
