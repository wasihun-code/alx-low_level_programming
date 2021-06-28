#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints a reverse string using pointer.
 * @s: pointes to a string.
 * Return: 0.
 */

void rev_string(char *s)
{
	int len;
	int i;
	char *fst, *end, l;

	len = strlen(s);
	fst = s;
	end = s + len - 1;
	for (i = 0; i < len / 2; i++)
	{
		l = *end;
		*end = *fst;
		*fst = l;

		fst++;
		end--;
	}
}
