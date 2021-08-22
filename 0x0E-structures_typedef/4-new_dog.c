#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * cpy - copy a string.
 *@src: souce string to be copied.
 *@dest: dstination
 * Return: destination string.
 */

char *cpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * dog_t *new_dog - check the code for Holberton School students.
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 * Return: struct newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (new);
	}

	new->name = malloc(sizeof(name) + 1);

	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(owner) + 1);

	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	cpy(new->name, name);
	new->age = age;
	cpy(new->owner, owner);
	return (new);
}
