#include "main.h"

/**
  * binary_to_uint - change binary to unsigned int
  * @b: string with 1s and 0s
  * Return: the changed unsigned int
  */

unsigned int binary_to_uint(const char *b)
{
	int res = 0, i, len, po;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	po = len;
	for (i = 0; b[i] != '\0'; i++, po--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res += ((b[i] - '0') * _pow(2, po));
	}
	return (res / 2);
}

/**
  * _pow - calculates power of a given number
  * @x: the first num
  * @y: the second number
  * Return: x the power of y
  */

int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}
