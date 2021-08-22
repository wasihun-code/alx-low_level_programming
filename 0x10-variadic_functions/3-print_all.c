#include "variadic_functions.h"

/**
  * _char - print char
  * @args: passed va_list
  * Return: void
  */

void _char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * _int - print int
 * @args: passed va_list
 * Return: void
 */

void _int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * _float - print float
 * @args: passed va_list
 * Return: void
 */

void _float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * _string - print string
 * @args: passed va_list
 * Return: void
 */

void _string(va_list args)
{
	char *s = va_arg(args, char*);

	printf("%s", s == NULL ? "(nil)" : s);
}

/**
 * print_all - print passed arguments based on the formats
 * @format: format used to print the passed argument
 * Return: void
 */

void print_all(const char * const format, ...)
{
	void (*fun[])(va_list) = {_char, _int, _float, _string};
	void (*pick)(va_list);
	char sign[4] = {'c', 'i', 'f', 's'};
	va_list args;
	int i = 0, j = 0, flag = 0;

	va_start(args, format);
	while (format != NULL  && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (sign[j] == format[i])
			{
				pick = fun[j];
				if (flag != 0)
					printf(", ");
				flag = 1;
				pick(args);
				break;
			}
			j++;
			pick = NULL;
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}
