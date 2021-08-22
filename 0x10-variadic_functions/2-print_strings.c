#include "variadic_functions.h"

/**
  * print_strings - print out passed arguments of string
  * @separator: string to be added b/n two strings
  * @n: number of passed arguments (strings)
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s = "(nil)";
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		printf("%s", str == NULL ? s : str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
}
