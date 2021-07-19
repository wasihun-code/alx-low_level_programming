#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: destination string.
 * @s2: source string.
 * @n: for index and control.
 * Return: pointer to a memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l, k = 0;
	char *s3 = (char *)malloc(sizeof(s1) + sizeof(s2) + 1);

	for (i = 0; s1[i] != '\0'; i++)
	for (l = 0; s2[l] != '\0'; l++)
	if (s3 != NULL)
	{
		for (j = 0; s1[k] != '\0'; j++)
		{
			s3[j] = s1[k];
			k++;
		}
		k = 0;
		if (n >= 1)
		{
			for (j = i; s2[k] != '0'; j++)
			{
				s3[j] = s2[k];
				k++;
			}
		}
		else
		{
			for (j = i; k <= n; j++)
			{
				s3[j] = s2[k];
				k++;
			}
		}
		s3[j] = '\0';
	}
	else
		return (NULL);

	return (s3);
}