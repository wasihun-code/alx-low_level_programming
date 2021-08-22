#include <stdio.h>

/**
 * main - sum of fibonacci numbers 4,000,000
 * Return: zero success
 */
int main(void)
{
	long int f1 = 0, f2 = 1, fn = 1, index;
	long int sum = 0;

	fn = f1 + f2;
	for (index = 0; fn < 4000000; index++)
	{
		if (fn % 2 == 0)
			sum += fn;
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
	}
	printf("%ld\n", sum);

	return (0);
}
