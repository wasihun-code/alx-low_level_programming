#include <stdio.h>

/**
  * print_name - print passed string using function pointer
  * @name: string to print
  * @f: pointer to functon
  * Return: zero
  */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
