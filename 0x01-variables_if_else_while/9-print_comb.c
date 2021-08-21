#include <stdio.h>
#include <stdlib.h>

/**
 * main - just a function
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar (i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
