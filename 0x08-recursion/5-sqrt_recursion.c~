#include "holberton.h"

/**
 *_naturalsqrt - checks for natural sqrt.
 *@a: number to check.
 *@b: second number.
 *Return: int
 */

int _naturalsqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (_naturalsqrt(a, b + 1));
}

/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: number.
 *Return: result.
 */
 
int _sqrt_recursion(int n)
{
	return (_naturalsqrt(n, 1));
}
