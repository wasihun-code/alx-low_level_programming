#include "holberton.h"
/**
 * main - print sum of nums divisable by 3 and 5
 * Return: sum of the nums
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0 || i % 15 == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
