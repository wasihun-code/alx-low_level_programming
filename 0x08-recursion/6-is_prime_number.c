#include "holberton.h"
#include <stdio.h>

/**
 * check_prime - check prime
 *@n:scaned number
 *@j: int value two
 * Return: int
 */

int check_prime(int n, int j)
{
	if (n == j)
		return (1);
	else if (n % j == 0)
		return (0);
	else if (n <= 1)
		return (0);
	return (check_prime(n, j + 1));
}

/**
 * is_prime_number - check prime or not
 *@n:scaned number
 * Return: int
 */


int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
