#include "holberton.h"

/**
 * _isdigit - checkes if a value is digit or not
 * @c: value to be checked
 * Return: one if digit 0 if not.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
