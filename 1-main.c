#include <stdio.h>
#include "dog.h"

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	printf("is %s, am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
