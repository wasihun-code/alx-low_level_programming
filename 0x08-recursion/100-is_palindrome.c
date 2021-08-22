#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to a string whose length is to be found
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (!*(s))
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * ispal - determines whether a string is palindrome or not
 * @s: string to be checked
 * @i: indext to start of s
 * @j: index to end of s
 *
 * Return: 1 if palindrome, else 0
 */

int ispal(char *s, int i, int j)
{
	if (i == j)
		return (1);
	else if (s[i] != s[j])
		return (0);
	if (i < j)
		return (ispal(s, i + 1, j - 1));
	return (1);
}

/**
 * is_palindrome - determines whether a string is palindrome or not
 * @s: pointer to string to be checked
 *
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (ispal(s, 0, _strlen_recursion(s) - 1));
}
