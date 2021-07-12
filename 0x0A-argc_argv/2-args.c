#include <stdio.h>
#include "holberton.h"

/**
 * main - prints all arguments it receives.
 * @argc: no of command line arguments.
 * @argv: array of strings of command line arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
