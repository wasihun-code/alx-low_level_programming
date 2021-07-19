#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int i; i = 0;

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
	int *a = array_range(0, 10);
	simple_print_buffer(a, 11);
	free(a);
	return (0);
}
