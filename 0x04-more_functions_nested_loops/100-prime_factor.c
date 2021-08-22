#include <stdio.h>

/**
 * main - print out the largest prime factor
 * Return: Always 0
 */

int main(void)
{
	long int n = 612852475143;
	long int dv = 2, maxfactor;

	while (1)
	{
		if (n % dv != 0)
			dv = dv + 1;
		else
		{
			maxfactor = n;
			n = n / dv;
			if (n == 1)
			{
				printf("%ld\n", maxfactor);
				break;
			}
		}
	}
	return (0);
}
