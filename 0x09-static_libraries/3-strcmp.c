#include "holberton.h"

/**
 * _strcmp - compare two string
 * @s1: first string to be compared
 * @s2: second string to be copmpard
 * Return: negative if s2 grater +ve if s1 grater else 0
 */

int _strcmp(char *s1, char *s2)
{

	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;

	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
