#include "holberton.h"

/**
  * factorial - calculate factorial of given number
  * @n: given num
  * Return: factorial of the num
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
