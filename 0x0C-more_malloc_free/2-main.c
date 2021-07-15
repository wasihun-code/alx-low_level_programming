#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
int main(void)
{
	char *a;

	a = calloc(98, sizeof(char));
	strcpy(a, "Holberton");
	strcpy(a + 9, " School! :)\n");
	a[97] = '!';
	simple_print_buffer(a, 98);
	free(a);
	return (0);
}
