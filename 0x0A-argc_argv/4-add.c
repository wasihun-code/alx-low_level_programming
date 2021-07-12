#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints the additon of positive numbers to stdiout.
 * @argc: noof command line arguments passed.
 * @argv: command line arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
					sum += atoi(argv[i]);
					if (isdigit(argv[i]))
						printf("yes");
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
