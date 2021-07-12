#include "holberton.h"
#include <stdio.h>

/**
 * main -prints command line arguments
 * @argc: no of commandline arguments
 * @argv: string of arrays of command line arguments.
 * Return: 0.
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
