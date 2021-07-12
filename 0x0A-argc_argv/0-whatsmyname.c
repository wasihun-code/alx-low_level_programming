#include "holberton.h"
#include <stdio.h>

/**
 * main - prints its name.
 * Return: an int.
 */

int main(int argc, char** argv)
{
	int i;

	for(i = 0; i < argc; i++)
	{
		_putchar(i);
	}

	return(0);
}
