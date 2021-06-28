#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - prints a reverse string using pointer.
 * @str: pointes to an int
 * Return: 0.
 */

void print_rev(char *str)
{
	int i = -1;
	char revstr[1000];
	char *rvptr = revstr;

	while (*str)
	{
		str++;
		i++;
	}

	while (i >= 0)
	{
		str--;
		*rvptr = *str;
		rvptr++;
		--i;
	}
	*rvptr = '\0';
	printf("%s\n", revstr);
}
