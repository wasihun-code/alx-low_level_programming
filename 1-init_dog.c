#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a dog.
 * @d: pointer to struct.
 * @name: character pointer to store the name.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: 0 since a void function.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;
	d = &my_dog;
	(void)name;
	(void)age;
	(void)owner;
}
