#include "holberton.h"
#include <stdio.h>

/**
 * print_fizz_buzz - Fizz Buzz and FizzBuzz.
 * Return: 0 since void.
 */

void print_fizz_buzz(void)
{
	int i;
	for (i = 1; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
