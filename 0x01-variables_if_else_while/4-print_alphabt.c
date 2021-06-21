#include <stdio.h>
#include <stdlib.h>

/**
 * main - alpahabet
 * Return: 0
 */

int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'e' || l == 'q')
		{
			continue;
		}
		else
		{
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
