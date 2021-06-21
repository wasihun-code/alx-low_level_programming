#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * main: last_digit finder
 * Return: 0
 */

int main(void)
{
	int n;
	int ld;
	char ls[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld < 6 && ld != 0)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", ls, n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	return (0);
}
