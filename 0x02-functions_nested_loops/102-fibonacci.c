#include <stdio.h>

/**
 * main - print first 50 fibonaci series.
 * Return: zero success
 */

int main(void)
{
	long int a, b, c, d;

	a = 0;
	b = 1;
	c = 1;
	for (d = 1; d <= 50; d++)
	{
		c = a + b;
		a = b;
		b = c;

		printf("%ld", c);
		if (d < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
