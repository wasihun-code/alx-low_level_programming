#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints multiplication of two integers.
 * @argc: no of command line arguments.
 * @argv: arrays of string of command line arguments.
 * Return: 0.
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
