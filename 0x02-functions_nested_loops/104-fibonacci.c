#include <stdio.h>

/**
 * main - print the first 98 fibonacci series.
 * Return: zero success
 */

int main(void)
{
	long double f1 = 0.0, f2 = 1.0, fn, index;

	for (index = 1.0; index <= 98.0; index++)
	{
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;

		printf("%.0Lf", fn);
		if (index < 98.0)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
