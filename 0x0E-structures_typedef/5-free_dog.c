#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog d.
 *@d: dog structure.
 * Return: void zero.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
