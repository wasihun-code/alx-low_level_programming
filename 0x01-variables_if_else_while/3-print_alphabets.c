#include <stdio.h>
#include <stdlib.h>

/**
 * main - alpahabet
 * Return: 0
 */

int main(void)
{
	int x;
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
