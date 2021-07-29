#include <stdio.h>
#include "dog.h"

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "poppy", 3.5, "BOB");
	printf("%s", my_dog.name);
	return (0);
}
