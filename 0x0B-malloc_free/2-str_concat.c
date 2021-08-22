#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string.
 * @s2: second string.
 * Return: a pointer to character string.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k = 0;
	char *s3 = (char *)malloc(sizeof(s1) + sizeof(s2) + 1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s3 != NULL)
	{
		for (j = 0; s1[k] != '\0'; j++)
		{
			s3[j] = s1[k];
			k++;
		}
		k = 0;
		for (i = j; s2[k] != '\0'; i++)
		{
			s3[i] = s2[k];
			k++;
		}
		s3[i] = '\0';
	}
	return (s3);
}
