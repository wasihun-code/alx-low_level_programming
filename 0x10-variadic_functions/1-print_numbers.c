#include "variadic_functions.h"

/**
  * print_numbers - prints out passed arguments numbers
  * @separator: string to separate nums
  * @n: number of passed arguments
  * Return: Nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
}
