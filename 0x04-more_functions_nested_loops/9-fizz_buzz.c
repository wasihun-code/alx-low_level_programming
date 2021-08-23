#include "holberton.h"
#include <stdio.h>

/**
 * main - Fizz Buzz and FizzBuzz.
 * Return: 0 since void.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i > 1 && i <= 100)
			printf(" ");
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
