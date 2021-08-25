#include "holberton.h"
#include <stdio.h>

/**
 * _puts - prints a string using pointer.
 * @str: pointes to an int
 * Return: 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str++);
	}
	printf("\n");
}
