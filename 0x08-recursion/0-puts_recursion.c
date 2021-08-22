#include "holberton.h"

/**
  * _puts_recursion - print out a given string
  * @s: strnig to be printed
  * Return: void
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s++);
	_puts_recursion(s);
}
