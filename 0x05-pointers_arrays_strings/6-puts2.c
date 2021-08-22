#include "holberton.h"

/**
  * puts2 - print every other character of  str.
  * @str: string.
  * Return: void.
  */

void puts2(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len % 2 == 0)
			_putchar(str[len]);
	}
	_putchar('\n');
}
